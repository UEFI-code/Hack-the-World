# Emulate Features of God's HyperVisor

### [Time Slow Down](./time_slow_down/)

- ```time_slow_thread.c```: Demo how the clock counter is slow down when another thread is heavy
- ```time_slow_emu.c```: Same as ```time_slow_thread.c```, but using a dummy sched instead of sys sched
- ```speed_cmp.c```: Demo how a thread is slow down when another thread is heavy