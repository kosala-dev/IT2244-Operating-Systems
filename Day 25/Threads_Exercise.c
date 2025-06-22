/*
Q1 --> Write a C program that creates two threds. Each thread should print a message indicating it is running.
The main thread should wait for both threads to finish before exiting.
*/

vi thread_01.c
gcc thread_01.c -o thread_01
./thread_01

#include <stdio.h>
#include <pthread.h>

void* print_message(void* arg){
    char* message = (char*)arg;
    printf("%s\n", message);
    return NULL;
}

int main(){
    pthread_t thread1, thread2;
    //create the threads
    pthread_create(&thread1, NULL, print_message, "Thread 1 is running");
    pthread_create(&thread2, NULL, print_message, "Thread 2 is running");

    //waits for threads to finish
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("Boths thread are completed!\n");
    return 0;
}




/*
Q2 --> Write a C program that creates 5 threds. Each thread should print its thread ID and then exit. 
The main thread should join all threads and print a completion message.
*/

vi thread_02.c
gcc thread_02.c -o thread_02
./thread_02

#include <stdio.h>
#include <pthread.h>

void* display_id(void* arg){
    pthread_t threadid = pthread_self();
    printf("Thread ID: %lu\n", threadid);
    return NULL;
}

int main(){
    pthread_t threads[5];

    for(int i = 0; i < 5; i++){
        pthread_create(&threads[i], NULL, display_id, NULL);
    }

    for(int i = 0; i < 5; i++){
        pthread_join(threads[i], NULL);
    }

    printf("All 5 threads have completed\n");
    return 0;
}

/*
Q3 --> Write a C program that creates a threds whitch prints numbers from 1 to 10 with a 1-second delay between each number. 
The main thread should wait for this threads to finish.
*/

vi thread_03.c
gcc thread_03.c -o thread_03
./thread_03

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

void* print_numbers(void* arg) {
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i);
        sleep(1); 
    }
    return NULL;
}

int main() {
    pthread_t thread;

    pthread_create(&thread, NULL, print_numbers, NULL);
    pthread_join(thread, NULL);

    printf("Thread finished.\n");
    return 0;
}

/*
Q4 --> Create two threads here one thread increments a global counter 100 times and the other thread decrements the same 
counter 100 times. Print the final value of the counter after both threads finish.
*/

vi thread_04.c
gcc thread_04.c -o thread_04
./thread_04

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int counter = 0;

// Function to increment the counter
void* increment_counter(void* arg) {
    for (int i = 0; i < 100; i++) {
        counter++;
    }
    return NULL;
}

// Function to decrement the counter
void* decrement_counter(void* arg) {
    for (int i = 0; i < 100; i++) {
        counter--;
    }
    return NULL;
}

int main() {
    pthread_t thread1, thread2;

    pthread_create(&thread1, NULL, increment_counter, NULL);
    pthread_create(&thread2, NULL, decrement_counter, NULL);
     
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("Final counter value: %d\n", counter);

    return 0;
}

/*
Q5 --> Implement a thread function that takes an integer argument, squares it, and returns the result to the main 
thread using pthread_exit and pthread_join.
*/

vi thread_05.c
gcc thread_05.c -o thread_05
./thread_05

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void* square_number(void* arg) {
    int num = *(int*)arg;  
    int* result = (int*) malloc(sizeof(int));
    *result = num * num;
    pthread_exit((void*) result);
}

int main() {
    pthread_t thread;
    int num = 5;

    pthread_create(&thread, NULL, square_number, (void*) &num);

    int* result;
    pthread_join(thread, (void**) &result);

    printf("Square of %d is %d\n", num, *result);
    free(result);

    return 0;
}
