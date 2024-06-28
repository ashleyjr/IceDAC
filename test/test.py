import serial
import serial.tools.list_ports
import time
import sys
import os
import time
import random
import argparse

KEYWORD="Lattice"

class Uart:
    def send(self, d):
        #print(f"TX: {hex(d)}")
        self.ser.write(d.to_bytes(1, byteorder='big'))
        while(self.ser.out_waiting > 0):
            pass

    def get(self):
        d = int.from_bytes(self.ser.read(1), byteorder='big')
        #print(f"RX: {hex(int(d))}")
        return int(d)

    def create(self,port,baud):
        self.ser = serial.Serial(
            port=port,
            baudrate=baud,
            parity=serial.PARITY_NONE,
            stopbits=serial.STOPBITS_ONE,
            bytesize=serial.EIGHTBITS,
            xonxoff=False,
            rtscts=False,
            dsrdtr=False,
            timeout=0.1
        )
        self.ser.flushInput()
        self.ser.flushOutput()

    def destory(self):
        self.ser.close()

    def search(self):
        ports = serial.tools.list_ports.comports()
        for port, desc, _ in sorted(ports):
            if KEYWORD in desc:
                print(f"Found: {port} to contain {KEYWORD}")
                return str(port)
            else:
                print(f"Skipping: {desc}")
        print("Error: No port found")
        sys.exit(1)

    def waiting(self):
        return self.ser.inWaiting()


def write_mem(u,addr,data):
    u.send((addr >> 8) & 0x7)
    assert u.get() == 0xA5
    u.send((addr >> 4) & 0xF)
    assert u.get() == 0xA5
    u.send((addr >> 0) & 0xF)
    assert u.get() == 0xA5
    u.send(0x10 | ((data >> 4) & 0xF))
    assert u.get() == 0xA5
    u.send(0x10 | ((data >> 0) & 0xF))
    assert u.get() == 0xA5
    u.send(0x20)
    assert u.get() == 0xA5
    print(f"mem[{addr}] = {data}")

def read_mem(u,addr):
    u.send((addr >> 8) & 0x7)
    assert u.get() == 0xA5
    u.send((addr >> 4) & 0xF)
    assert u.get() == 0xA5
    u.send((addr >> 0) & 0xF)
    assert u.get() == 0xA5
    u.send(0x30)
    d = u.get()
    print(f"mem[{addr}] -> {d}")
    return d



def mem_test(u):
    addrs = [0,1,2,77,777,2045,2046,2047]
    datas = [0,0,0,0,0,0,0,0]

    for addr in addrs:
        write_mem(u,addr,0)

    for i in range(100):
        idx = random.randrange(len(addrs))
        if(random.choice([True,False])):
            # Read
            data = read_mem(u,addrs[idx])
            assert data == datas[idx]
        else:
            # Write
            data = random.randrange(64)
            write_mem(u,addrs[idx],data)
            datas[idx] = data
    print("PASS")

def main():
    u = Uart()
    p = u.search()
    u.create(p,9600)

    mem_test(u)

    u.destory()

if "__main__" == __name__:
    parser = argparse.ArgumentParser()
    args = parser.parse_args()
    main()
