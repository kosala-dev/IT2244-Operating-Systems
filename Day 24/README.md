
# Multithreading in C using pthreads

This repository contains multiple examples demonstrating the use of POSIX threads (`pthreads`) in C for multithreading. These examples range from basic thread creation to performing parallel computation using multiple threads.

## Contents

### 1. Hello World Thread
This simple example shows how to create a single thread that prints "Hello World" after a delay.

**File:** `hello_world_thread.c`

![1](https://github.com/user-attachments/assets/5dcbe934-b06f-4e8d-b3af-8295a43ace92)


### 2. Multiple Threads Example
This example demonstrates how to create two threads, each printing a message.

**File:** `multi_threads.c`

![2](https://github.com/user-attachments/assets/e5814fdb-2b43-414e-97f6-20865aeff494)


### 3. Array of Threads Example
This code shows how to create multiple threads using a loop. Each thread prints a unique message.

**File:** `thread_array.c`

![3](https://github.com/user-attachments/assets/7fb746f5-6573-4411-bcca-0a7b640554de)


### 4. Parallel Sum Using Threads
This exercise demonstrates how to split an array and calculate the sum of its elements using two threads. Each thread computes the sum of a part of the array in parallel.

**File:** `parallel_sum.c`

<img width="959" alt="4" src="https://github.com/user-attachments/assets/c0750c3b-ea9f-4a91-8aa8-f6c5f14eb0ed" />


## Compilation and Execution

To compile and run any of the examples, use the following commands:

```
gcc filename.c -o filename
./filename
```

Example:
```
gcc hello_world_thread.c -o hello_world_thread
./hello_world_thread
```

## Author
Kosala Madushan
