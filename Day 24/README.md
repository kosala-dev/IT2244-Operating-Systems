
# Multithreading in C using pthreads

This repository contains multiple examples demonstrating the use of POSIX threads (`pthreads`) in C for multithreading. These examples range from basic thread creation to performing parallel computation using multiple threads.

## Contents

### 1. Hello World Thread
This simple example shows how to create a single thread that prints "Hello World" after a delay.

**File:** `hello_world_thread.c`

### 2. Multiple Threads Example
This example demonstrates how to create two threads, each printing a message.

**File:** `multi_threads.c`

### 3. Array of Threads Example
This code shows how to create multiple threads using a loop. Each thread prints a unique message.

**File:** `thread_array.c`

### 4. Parallel Sum Using Threads
This exercise demonstrates how to split an array and calculate the sum of its elements using two threads. Each thread computes the sum of a part of the array in parallel.

**File:** `parallel_sum.c`

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