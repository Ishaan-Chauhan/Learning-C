/*
    NUMUTIL.C
    Number Utility Menu
    - Prime check
    - Factorial (recursive)
    - Fibonacci series
    - GCD (Euclidean algorithm, recursive)

    Builds on FORLOOP.C / WHILE files but moves the logic
    into separate functions instead of writing it all in main().
*/

#include <stdio.h>

int isPrime(int n);
long factorial(int n);
void fibonacci(int terms);
int gcd(int a, int b);

int main() {
    int choice, num, a, b;

    do {
        printf("\n===== NUMBER UTILITIES =====\n");
        printf("1. Check Prime\n");
        printf("2. Factorial\n");
        printf("3. Fibonacci Series\n");
        printf("4. GCD of two numbers\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (isPrime(num))
                    printf("%d is a prime number.\n", num);
                else
                    printf("%d is not a prime number.\n", num);
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("Factorial of %d = %ld\n", num, factorial(num));
                break;

            case 3:
                printf("How many terms? ");
                scanf("%d", &num);
                fibonacci(num);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("GCD of %d and %d = %d\n", a, b, gcd(a, b));
                break;

            case 5:
                printf("Goodbye!\n");
                break;

            default:
                printf("Invalid choice, try again.\n");
        }
    } while (choice != 5);

    return 0;
}

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);   /* recursion: function calls itself */
}

void fibonacci(int terms) {
    int t1 = 0, t2 = 1, next;

    printf("Fibonacci Series: ");
    for (int i = 1; i <= terms; i++) {
        printf("%d ", t1);
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    printf("\n");
}

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);   /* Euclidean algorithm, recursive */
}