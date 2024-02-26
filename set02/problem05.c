/*05.  Write a program to find GCD _(HCF)_ of two numbers.

***Function Declarations***
```c
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);
```

***Input***
```
12
16
```

***Output***
```
4
```

---

*/

#include <stdio.h>

int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main() {
    int num1, num2, gcd;

    num1 = input();
    num2 = input();
    gcd = find_gcd(num1, num2);
    output(num1, num2, gcd);
    return 0;
}

int input() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

int find_gcd(int a, int b) {
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

void output(int a, int b, int gcd) {
    printf("The GCD of %d and %d is %d\n", a, b, gcd);
}


