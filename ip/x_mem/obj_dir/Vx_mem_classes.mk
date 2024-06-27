# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vx_mem.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vx_mem \
	Vx_mem___024root__DepSet_h248c0d33__0 \
	Vx_mem___024root__DepSet_h00861166__0 \
	Vx_mem_x_mem_2p_2048x2__DepSet_hd62bb6c9__0 \
	Vx_mem_x_mem_2p_2048x2__DepSet_hd62bb6c9__1 \
	Vx_mem_x_mem_2p_2048x2__DepSet_hd62bb6c9__2 \
	Vx_mem_x_mem_2p_2048x2__DepSet_hd62bb6c9__3 \
	Vx_mem_x_mem_2p_2048x2__DepSet_hd62bb6c9__4 \
	Vx_mem_x_mem_2p_2048x2__DepSet_hd62bb6c9__5 \
	Vx_mem_x_mem_2p_2048x2__DepSet_h532156dc__0 \
	Vx_mem_x_mem_2p_2048x2__DepSet_h532156dc__1 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vx_mem___024root__Slow \
	Vx_mem___024root__DepSet_h248c0d33__0__Slow \
	Vx_mem___024root__DepSet_h00861166__0__Slow \
	Vx_mem_x_mem_2p_2048x2__Slow \
	Vx_mem_x_mem_2p_2048x2__DepSet_hd62bb6c9__0__Slow \
	Vx_mem_x_mem_2p_2048x2__DepSet_hd62bb6c9__1__Slow \
	Vx_mem_x_mem_2p_2048x2__DepSet_hd62bb6c9__2__Slow \
	Vx_mem_x_mem_2p_2048x2__DepSet_h532156dc__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vx_mem__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vx_mem__Syms \
	Vx_mem__Trace__0__Slow \
	Vx_mem__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
