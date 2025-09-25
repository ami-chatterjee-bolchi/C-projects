#include<stdio.h>
#include<math.h>
void printFibonacci(int);
void printPrimeFibo(int);
int isPrime(int);
int main() {
    int choice, limit;
    char flag;
    
    do {
        printf("\n---------------- Check Fibonacci ----------------\n");
        printf("1. Print Fibonacci series up to a given value\n");
        printf("2. Print prime Fibonacci terms\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the limit: ");
                scanf("%d", &limit);
                printFibonacci(limit);
                break;

            case 2:
                printf("Enter the terms of Prime Fibonacci: ");
                scanf("%d", &limit);
                printPrimeFibo(limit);
                break;

            default:
                printf("Invalid choice! Please try again \n");
        }
        printf("\n\n Do you want to continue? (Press 'y' to continue or any other key to exit): ");
			scanf(" %c",&flag);
			if(flag!='y'&& flag!='Y')
				break;
    } while (1);

    return 0;
}


// Function to print Fibonacci series up to n
void printFibonacci(int n) {
    int a = 0, b = 1, c;
    printf("Fibonacci series up to %d:\n", n);
    while (a <= n) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}


// Function to check if a number is prime
int isPrime(int n) {
	int i;
    if (n < 2)
        return 0;
    for (i = 2; i <=sqrt(n); i++) {  // only check up to sqrt(n)
        if (n % i == 0)
            return 0;  // not prime
    }
    return 1;  // prime
}

// Function to print first n prime Fibonacci numbers
void printPrimeFibo(int n) {
    int a = 0, b = 1, c, counter = 0;

    printf("First %d Prime Fibonacci terms are:\n", n);

    while (counter < n) {
        if (isPrime(b)) {  // check Fibonacci term b
            printf("%d ", b);
            counter++;
        }
        // generate next Fibonacci term
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}


