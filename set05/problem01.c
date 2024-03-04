#include <stdio.h>
#include <math.h>

struct _point {
    float x;
    float y;
};
typedef struct _point Point;

Point input() {
    Point p;
    scanf("%f %f", &p.x, &p.y);
    return p;
}

void dist(Point a, Point b, float *res) {
    *res = sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2));
}

void output(Point a, Point b, float res) {
    printf("The Distance between (%.1f,%.1f) and (%.1f,%.1f) is %.1f\n", a.x, a.y, b.x, b.y, res);
}

int main() {
    Point p1 = input();
    Point p2 = input();
    float distance;
    dist(p1, p2, &distance);
    output(p1, p2, distance);
    return 0;
}