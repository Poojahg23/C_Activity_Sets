/*02.  Write a program to find if a triangle is scalene.

> A triangle is scalene if all the three sides of the triangle are not equal to one another

***Function Declarations***
```c
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
```

***Input***
```
5
4
5
```

***Output***
```
The triangle with sides 5, 4 and 5 is not scalene
```

---*/

#include <stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main() {
    int side1, side2, side3, isscalene;
    side1 = input_side();
    side2 = input_side();
    side3 = input_side();
    isscalene = check_scalene(side1, side2, side3);
    output(side1, side2, side3, isscalene);
    return 0;
}

int input_side() {
    int side;
    printf("Enter the length of a side: ");
    scanf("%d", &side);
    return side;
}


int check_scalene(int a, int b, int c) {
    return (a != b && b != c && c != a);
}

void output(int a, int b, int c, int isscalene) {
    if (isscalene) {
        printf("The triangle with sides %d, %d, and %d is scalene\n", a, b, c);
    } else {
        printf("The triangle with sides %d, %d, and %d is not scalene\n", a, b, c);
    }
}
