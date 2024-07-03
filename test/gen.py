import argparse
import math
import matplotlib.pyplot as plt
import numpy as np
import sys

WAVES=['sine','cosine']
MAX=63
MIN=0
MAX_SAMPLES=2048

def sine(samples, peak_to_peak, offset, plot=False):
    tau = np.pi * 2
    res = tau / samples
    wave = np.sin(np.arange(0, tau, res))
    wave *= (peak_to_peak / 2)
    wave += offset
    wave = wave.round(0)
    if plot:
        plt.plot(wave)
        plt.savefig("graph.png", dpi=200)
    return wave


if "__main__" == __name__:
    parser = argparse.ArgumentParser()
    parser.add_argument('-w', '--wave')
    parser.add_argument('-c', '--clock_MHz', default='12')
    parser.add_argument('-f', '--frequency_MHz', default='1')
    parser.add_argument('-p', '--peak_to_peak', default='62')
    parser.add_argument('-o', '--offset', default=32)
    args = parser.parse_args()

    # Convert
    clock_MHz=float(args.clock_MHz)
    frequency_MHz=float(args.frequency_MHz)
    peak_to_peak=int(args.peak_to_peak)
    offset=int(args.offset)

    # Check
    if(args.wave not in WAVES):
        print(f"-w/--wave '{args.wave}' not valid, select from {WAVES}")
        sys.exit(1)

    hi = offset + (peak_to_peak / 2)
    lo = offset - (peak_to_peak / 2)

    if(lo < MIN) or (hi > MAX):
        print(f"Waveform high={hi} low={lo} out of range [{MIN} to {MAX} inclusive]")
        sys.exit(1)

    samples = math.floor(clock_MHz / frequency_MHz)

    if(samples > MAX_SAMPLES):
        print(f"Number of samples {samples} out of range [{MAX_SAMPLES}]")
        sys.exit(1)



    # Display
    print(f"Wave:            {args.wave}")
    print(f"Clock (MHz):     {clock_MHz}")
    print(f"Frequency (MHz): {frequency_MHz}")
    print(f"Peak to peak:    {peak_to_peak}")
    print(f"Offset:          {offset}")
    print(f"Samples:         {samples}")

    np.set_printoptions(threshold=sys.maxsize)
    wave = sine(samples, peak_to_peak, offset, False)

    print(wave)




