# Threading Examples in C

This repository contains simple multithreading examples using the POSIX `pthread` library in C. Each program demonstrates a different aspect of thread creation, synchronization, and communication.

## Files

### 1. `thread_01.c` – Create Two Threads
Creates two threads. Each prints a message. Main waits for both.

<img width="959" alt="1" src="https://github.com/user-attachments/assets/9f8d6d21-14a2-442d-ad76-bc287aa89515" />

### 2. `thread_02.c` – Print Thread IDs
Creates 5 threads. Each prints its own thread ID.

<img width="959" alt="2" src="https://github.com/user-attachments/assets/37bd3593-63bb-4e76-99ca-8a2ee56ddc6e" />

### 3. `thread_03.c` – Print Numbers with Delay
Prints numbers 1 to 10 with a 1-second delay in a thread.

<img width="959" alt="3" src="https://github.com/user-attachments/assets/e509d221-f868-4327-9f7c-6d4d2ee30806" />

### 4. `thread_04.c` – Increment and Decrement Counter
One thread increments, another decrements a shared counter 100 times.

<img width="959" alt="4" src="https://github.com/user-attachments/assets/5a332738-b0ab-4eea-9426-b6eba3297c80" />

### 5. `thread_05.c` – Square Number and Return Result
Squares a number in a thread and returns it using `pthread_exit`.

<img width="959" alt="5" src="https://github.com/user-attachments/assets/a8af2e45-42c4-4b7a-a2ff-2e025c7145bf" />

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
