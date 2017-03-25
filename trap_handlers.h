#include <comp421/hardware.h>
#include <comp421/yalnix.h>

void kernel_trap_handler(ExceptionInfo *frame);

void clock_trap_handler (ExceptionInfo *frame);

void illegal_trap_handler (ExceptionInfo *frame);

void memory_trap_handler (ExceptionInfo *frame);

void math_trap_handler (ExceptionInfo *frame);

void tty_recieve_trap_handler (ExceptionInfo *frame);

void tty_transmit_trap_handler (ExceptionInfo *frame);

void reset_time_till_switch();