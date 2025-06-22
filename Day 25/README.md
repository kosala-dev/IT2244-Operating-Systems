# Threading Examples in C

This repository contains simple multithreading examples using the POSIX `pthread` library in C. Each program demonstrates a different aspect of thread creation, synchronization, and communication.

## Files

### 1. `thread_01.c` – Create Two Threads
Creates two threads. Each prints a message. Main waits for both.

### 2. `thread_02.c` – Print Thread IDs
Creates 5 threads. Each prints its own thread ID.

### 3. `thread_03.c` – Print Numbers with Delay
Prints numbers 1 to 10 with a 1-second delay in a thread.

### 4. `thread_04.c` – Increment and Decrement Counter
One thread increments, another decrements a shared counter 100 times.

### 5. `thread_05.c` – Square Number and Return Result
Squares a number in a thread and returns it using `pthread_exit`.

## How to Compile
Use the `-lpthread` flag:
```bash
gcc thread_01.c -o thread_01 -lpthread
./thread_01
```

Repeat for the other files by replacing the filename.

## Requirements
- GCC compiler
- POSIX-compliant OS (Linux/Unix or WSL)