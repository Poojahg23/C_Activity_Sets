#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

void input(Fraction *frac1, Fraction *frac2, Fraction *frac3) {
    scanf("%d %d", &frac1->num, &frac1->den);
    scanf("%d %d", &frac2->num, &frac2->den);
    scanf("%d %d", &frac3->num, &frac3->den);
}

Fraction findSmallest(Fraction frac1, Fraction frac2, Fraction frac3) {
    Fraction smallest = frac1;

    if ((frac2.num * smallest.den) < (smallest.num * frac2.den))
        smallest = frac2;
    if ((frac3.num * smallest.den) < (smallest.num * frac3.den))
        smallest = frac3;

    return smallest;
}

int main() {
    Fraction frac1, frac2, frac3, result;

    input(&frac1, &frac2, &frac3);
    result = findSmallest(frac1, frac2, frac3);

    printf("The smallest of %d/%d, %d/%d, and %d/%d is %d/%d\n",
           frac1.num, frac1.den, frac2.num, frac2.den,
           frac3.num, frac3.den, result.num, result.den);

    return 0;
}
