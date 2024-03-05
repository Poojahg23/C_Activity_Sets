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

int find_mood(float radius, float height, float length) {
    if (radius < height && radius < length)
        return 0; // Sick
    else if (height < length && height < radius)
        return 1; // Happy
    else if (length < height && length < radius)
        return 2; // Tense
    else
        return -1; // Unknown mood
}

void output(Camel c, int mood) {
    printf("The weight of the camel with radius: %.1f, height: %.1f, length: %.1f is %.4f\n", c.radius, c.height, c.length, c.weight);
    
    switch (mood) {
        case 0:
            printf("The Camel is Sick\n");
            break;
        case 1:
            printf("The Camel is Happy\n");
            break;
        case 2:
            printf("The Camel is Tense\n");
            break;
        default:
            printf("The Camel's mood is uncertain\n");
    }
}

int main() {
    Camel camel = input();
    camel.weight = calculate_weight(camel);
    int mood = find_mood(camel.radius, camel.height, camel.length);
    output(camel, mood);
    return 0;
}