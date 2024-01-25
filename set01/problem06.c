/*6. Write a C program to compare three numbers using **pass by reference**

***Function Declarations***

```c
int input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);
```

***Input***

```
1
1
0
```

***Output***

```
1
```

---*/

#include <stdio.h>

// Function declarations
int input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

int main() {
    int a,b,c,largest;
    input(&a, &b, &c);
    compare(a,b,c, &largest);
    output(a,b,c, largest);
    return 0;
}

int input(int *a, int *b, int *c) {
    printf("Enter the first number: ");
    scanf("%d", a);
    printf("Enter the second number: ");
    scanf("%d", b);
    printf("Enter the third number: ");
    scanf("%d", c);
    return 0;
}

void compare(int a, int b, int c, int *largest) {
    if (a >= b && a >= c)
        *largest = a;
    else if (b >= c)
        *largest = b;
    else
        *largest = c;
}

void output(int a, int b, int c, int largest) {
    printf("%d\n", largest);
}


