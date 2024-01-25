/*11. Write a C program to find the sum of 2 complex numbers

struct _complex {
	float real;
	float imaginary;
}
typedef struct _complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);

*/

#include <stdio.h>

struct _complex {    
float real;    
float imaginary;
};

typedef struct _complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);

int main(){
    Complex a,b,sum;
    a=input_complex();
    b=input_complex();
    sum=add_complex(a,b);
    output(a,b,sum);
    return 0;
}

Complex input_complex(){
    Complex c;
    printf("Enter the real and imaginary parts:\n");
    scanf("%f %f", &c.real,&c.imaginary);
    return c;
}

Complex add_complex(Complex a, Complex b){
    Complex sum;
    sum.real=a.real+ b.real;
    sum.imaginary=a.imaginary+b.imaginary;
    return sum;
}

void output(Complex a, Complex b, Complex sum){
    printf("the sum of %1.f+%1.fi and %1.f+%1.fi is %1.f+%1.f1\n", a.real,b.real,a.imaginary,b.imaginary,sum.real,sum.imaginary);
}
