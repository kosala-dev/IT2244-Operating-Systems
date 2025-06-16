hello_world_thread.c

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

//A normal c function that is executed as a thread
//when its names is specified in pthread_create()
void *helloWorld(void *vargp)
{
    sleep(1);
    printf("Hello World\n");
    return NULL;
}

int main(){
    pthread_t thread_id;
    printf("Before thread\n");
    pthread_create(&thread_id, NULL, helloWorld, NULL);
    pthread_join(thread_id, NULL);
    printf("After thread\n");
    exit(0);

}


multi_threads.c

//multi threads process
#include <stdio.h>
#include <pthread.h>

//function to be executed by the thread
void *print_message(void* arg){
    char * message = (char*)arg;
    printf("%s\n", message);
    return NULL;
}

int main(){
    pthread_t thread1, thread2;

    //create first thread
    pthread_create(&thread1, NULL, print_message, "Hello from thread 1!");

    //create second thread
    pthread_create(&thread2, NULL, print_message, "Hello from thread 2!");

    //wait for both threads to finish
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("Both threads completed\n");
    return 0;
}


thread_array.c

#include <stdio.h>
#include <pthread.h>

void *print_message(void* arg){
    char *message = (char*)arg;
    printf("%s\n", message);
    return NULL;
}

int main(){
    pthread_t threads[3];
    char* messages[] = {
        "Thread 1 says hi!",
        "Thread 2 says hello!",
        "Thread 3 says hey!"
    };

    for(int i = 0; i < 3; i++){
        pthread_create(&threads[i], NULL, print_message, messages[i]);
    }

    for(int i = 0; i < 3; i++){
        pthread_join(threads[i], NULL);
    }

    printf("All threads are done\n");

    return 0;
}

parallel_sum.c

//Exercise
//using threads to cmpare parts of a sum(Parallel sum)

#include <stdio.h>
#include <pthread.h>

#define SIZE 6;

int arr[SIZE] = {1, 2, 3, 4, 5, 6};
int sum1 = 0, sum2 = 0;

void *sum_part1(void* arg){
    for(int i = 0; i < SIZE/2; i++){
        sum1 += arr[i];
    }
    return NULL;
}

void *sum_part2(void* arg){
    for(int i = SIZE/2; i < SIZE; i++){
        sum2 += arr[i];
    }
    return NULL;
}

int main(){
    pthread_t t1, t2;
    pthread_create(&t1, NULL, sum_part1, NULL);
    pthread_create(&t2, NULL, sum_part2, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    printf("Total sum: %d\n", sum1 + sum2);
    return 0;
}