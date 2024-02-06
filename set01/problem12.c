/*12.Write a C program to find the sum of _n_ complex numbers
```
***Function Declarations***
```c
struct _complex {
	float real,imaginary;
};
typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);
```

***Input***
 ```
Enter the number of arrays: 3
2 3
4 5
6 7
```
***Output***
```
2+3i + 4+5i + 6+7i is 12+15i
```
*/

#include<stdio.h>
#include<complex.h>

struct _complex {
	float real,imaginary;
};
typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int main() {
    int n = get_n();
    Complex c[n];
    input_n_complex(n, c);
    Complex result = add_n_complex(n, c);
    output(n, c, result);
    return 0;
}

int get_n() {
    int n;
    printf("Enter the number of complex numbers: \n");
    scanf("%d", &n);
    return n;
}

Complex input_complex() {
    Complex c;
    printf("Enter real part: \n");
    scanf("%f", &c.real);
    printf("Enter imaginary part: \n");
    scanf("%f", &c.imaginary);
    return c;
}

void input_n_complex(int n, Complex c[n]) {
    printf("Enter the complex numbers:\n");
    for (int i = 0; i < n; i++) {
        c[i] = input_complex();
    }
}

Complex add(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}

Complex add_n_complex(int n, Complex c[n]) {
   Complex result;
   result.real = 0.0;
   result.imaginary = 0.0;
    for (int i = 0; i < n; i++) 
{
    result = add(result, c[i]);
    return result;
}

void output(int n, Complex c[n], Complex result) 
{
    printf("Complex Numbers:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f + %.2fi\n", c[i].real, c[i].imaginary);
    }
    printf("Sum of Complex Numbers: %.2f + %.2fi\n", result.real, result.imaginary);
}


