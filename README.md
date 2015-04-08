# Neon Drivers Examples

Neon is a collection of software components for real-time applications.

# Using Neon Drivers examples

## Configuration

Configuration is done in `neon_drivers_app_config.h` header file located in 
example port directory. The file is included by `drivers/config.h` header file, 
which is included by all Neon Drivers components.

## Building

### Include paths

- `neon-eds/include` - Neon EDS include path. Submodules are referenced by their 
    respective subdirectories.
- `neon-eds/port/_port-name_` - Neon core port. The _port-name_ is the directory 
    of the port that is being used.
- `neon-drivers/include` - Drivers include path. Submodules are referenced by 
    their respective subdirectories.
- `neon-drivers/port/_port-name_` - Drivers port. The _port-name_ is the 
    directory of the port that is being used.
- `port/_port-name_` - Example port (usually BSP sources). The _port-name_ is 
    the directory of the port that is being used.

### Source files

Neon EDS sources:
- `neon-eds/source/epa.c` - Event Processing Agent
- `neon-eds/source/equeue.c` - Event Queue
- `neon-eds/source/etimer.c` - Event Timer
- `neon-eds/source/event.c` - Event Object
- `neon-eds/source/heap.c` - Heap memory allocator
- `neon-eds/source/mem.c` - Memory allocator class
- `neon-eds/source/pool.c` - Pool memory allocator
- `neon-eds/source/sched.c` - Scheduler
- `neon-eds/source/smp.c` - State machine processor
- `neon-eds/source/static.c` - Static memory allocator
- `neon-eds/source/timer.c` - Virtual timer
- `neon-eds/port/_port-name_/p_core.c` - main port source file. Ports may have 
    additional source files located in `port/_port-name_` directory which need 
    to be compiled.
    
Examples additional sources:
- `example/_example-name_/_example-name_.c` - main example source file
- `port/_port-name_/*` - everything under this directory is related to used port
    and should be compiled as needed.


