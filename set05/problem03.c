#include <stdio.h>
#include <math.h>

#define PI 3.1415

struct camel {
    float radius, height, length, weight;
};

typedef struct camel Camel;

Camel input() {
    Camel c;
    printf("Enter radius, height, and length of the camel: ");
    scanf("%f %f %f", &c.radius, &c.height, &c.length);
    return c;
}

float calculate_weight(Camel c) {
    return PI * pow(c.radius, 3) * sqrt(c.height * c.length);
}

void output(Camel c) {
    printf("The weight of the camel with radius: %.1f, height: %.1f, length: %.1f is %.4f\n", c.radius, c.height, c.length, c.weight);
}

int main() {
    Camel camel = input();
    camel.weight = calculate_weight(camel);
    output(camel);
    
    return 0;
}