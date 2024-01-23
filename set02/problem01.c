/*01.  Write a program to find the area of a triangle.

***Function Declarations***
```c
void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);
```

***Input***
```
1
2
```

***Output***
```
The area of the traingle with base 1.000000 and height 2.000000 is 1.000000
```

---*/

#include <stdio.h>

int main(){
    float base,height,area ;
    input( &base, &height);
    find_area( base,height, &area);
    output(base,height,area);
    return 0;
}
void input(float *base, float *height){
    printf("Enter the base value");
    scanf("%f", &base);
    printf("Enter the base value");
    scanf("%f", &height);
}

void find_area(float base , float height, float *area){
    *area = 0.5 * base* height ;
}

void output(float base, float height, float area){
    printf("the area of the triangle is %6.f", &area);
}
