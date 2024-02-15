//  1. Write a program to find the distance between 2 points

// ***Function Declarations***
// ```c
// void input(float *x1, float *y1, float *x2, float *y2);
// float find_distance(float x1, float y1, float x2, float y2);
// void output(float x1, float y1, float x2, float y2, float distance);
// ```

// ***Input***
// ```
// 1 1
// 2 2
// ```

// ***Output***
// ```
// The distance between point (1.0000000, 1.0000000) and (2.0000000, 2.0000000) is 1.4142
// ```

#include <stdio.h>
#include <math.h>

void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);

int main() {
    float x1, y1, x2, y2, distance;
    input(&x1, &y1, &x2, &y2);
    distance = find_distance(x1, y1, x2, y2);
    output(x1, y1, x2, y2, distance);
    return 0;
}

void input(float *x1, float *y1, float *x2, float *y2) {
    printf("Enter coordinates of point 1 (x1 y1): ");
    scanf("%f %f", x1, y1);
    printf("Enter coordinates of point 2 (x2 y2): ");
    scanf("%f %f", x2, y2);
}

float find_distance(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

void output(float x1, float y1, float x2, float y2, float distance) {
    printf("The distance between point (%.7f, %.7f) and (%.7f, %.7f) is %.4f\n", x1, y1, x2, y2, distance);
}
