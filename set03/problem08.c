#include <stdio.h>
#include <math.h>

typedef struct point {
    float x, y;
} Point;

typedef struct polygon {
    int sides;
    Point p[100];
    float perimeter;
} Polygon;

int input_n();
Point input_point(char *prompt_msg);
int input_polygon(Polygon *p);
float find_distance(Point a, Point b);
void find_perimeter(Polygon* p);
void output(Polygon p);

int main() {
    Polygon poly;
    poly.sides = input_n();
    input_polygon(&poly);
    find_perimeter(&poly);
    output(poly);

    return 0;
}

int input_n() {
    int n;
    printf("Enter the number of sides of the polygon:\n");
    scanf("%d", &n);
    return n;
}

Point input_point(char *prompt_msg) {
    Point p;
    printf("%s", prompt_msg);
    scanf("%f %f", &p.x, &p.y);
    return p;
}

int input_polygon(Polygon *p) {
    printf("Enter the coordinates of points:\n");
    for (int i = 0; i < p->sides; ++i) {
        char prompt[50];
        sprintf(prompt, "Enter the coordinates of point %d (x,y): ", i + 1);
        p->p[i] = input_point(prompt);
    }
    return 0;
}

float find_distance(Point a, Point b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

void find_perimeter(Polygon* p) {
    p->perimeter = 0.0;
    for (int i = 0; i < p->sides; ++i) {
        p->perimeter += find_distance(p->p[i], p->p[(i + 1) % p->sides]);
    }
}

void output(Polygon p) {
    printf("The perimeter of the polygon is %f\n", p.perimeter);
}
