// code a program which have a parent A and have two childs B & C. Parent must take 3 inputs as a,b,c
// child B must do Factorial for the number a taken from the user
// child C must do Fibonacci for the number b and find prime numbers upto number c

#include <stdio.h>
#include <unistd.h>

int a, b, c;
int factorial = 1;


int Factorial(int num){
    for(int a = 1; a <= num; a++){
        factorial *= a;
    }
}

int Fibonacci(int num){
    int d = 0;
    int e = 1;
    int next = 0;
    while(d <= b){
        printf(" %d ", d);
        next = d + e;
        d = e;
        e = next;
    }
}

int Prime(int num){
    for (int num = 1; num <= c; num++) {
        int isPrime = 1; 

        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0; 
                break;
            }
        }

        if (isPrime && num > 1) {
            printf(" %d ", num);
        }
    }
}

int main(){
    printf("Enter number A: ");
    scanf("%d", &a);
    printf("Enter number B: ");
    scanf("%d", &b);
    printf("Enter number C: ");
    scanf("%d", &c);

    int f1 = fork();
    
    if(f1 == 0){
        printf("\nI'm Child B and My Parent ID is %d\n", getppid());
        Factorial(a);
        printf("Factorial of %d is %d\n", a, factorial);

    } else {
        int f2 = fork();
        if( f2 == 0){
            printf("I'm Child C and My Parent ID is %d\n", getppid());
            printf("Fibonacci series upto number %d\n", b);
            Fibonacci(b);

            printf("\nPrime numbers from 1 to %d\n", c);
            Prime(c);

        } else {
            printf("I'm Parent and ID is %d & my Parent's ID is %d", getpid(), getppid());
        }
    }

    return 0;
}