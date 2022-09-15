This files demonstrates volatile variable effect when different levels of compiler optimizations are applied
signal_generator generates signal. volatile_example.c catches that signal

if sufficient level of compiler optimization (greater then or equal to O1) is used when compiling volatile_example.c, then code stucks t (while (x == 1)) even after signal is received.

cc volatile_example.c -o  volatile_example.out -O3 <This will compile the code with 03 (most optimization) level>
