#include <stdio.h>

int getInput();
void initializeArray(int n, int array[n]);
void sieveOfEratosthenes(int n, int array[n]);
void displayPrimes(int n, int array[n]);

int main() {
    int limit = getInput();
    int primes[limit + 1];

    initializeArray(limit + 1, primes);
    sieveOfEratosthenes(limit, primes);
    displayPrimes(limit, primes);

    return 0;
}

int getInput() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    return n;
}

void initializeArray(int n, int array[n]) {
    for (int i = 2; i <= n; i++) {
        array[i] = 1;
    }
}

void sieveOfEratosthenes(int n, int array[n]) {
    for (int p = 2; p * p <= n; p++) {
        if (array[p] == 1) {
            for (int i = p * p; i <= n; i += p) {
                array[i] = 0;
            }
        }
    }
}

void displayPrimes(int n, int array[n]) {
    printf("Prime numbers between 2 and %d are: ", n);
    for (int i = 2; i <= n; i++) {
        if (array[i] == 1) {
            printf("%d", i);
            if (i < n) {
                printf(", ");
            }
        }
    }
    printf("\n");
}
