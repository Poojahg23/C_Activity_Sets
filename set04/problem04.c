#include <stdio.h>

int input_degree();
void input_coefficients(int n, float a[n]);
float input_x();
float evaluate_polynomial(int n, float a[n], float x);
void output(int n, float a[n], float x, float result);

int main() {
    int n = input_degree();
    float a[n + 1]; // Array size of n + 1 for coefficients from a[0] to a[n]
    input_coefficients(n + 1, a); // Passing n + 1 because we include the constant term
    float x = input_x();
    float result = evaluate_polynomial(n, a, x);
    output(n, a, x, result);
    return 0;
}

int input_degree() {
    int degree;
    scanf("%d", &degree);
    return degree;
}

void input_coefficients(int n, float a[n]) {
    for (int i = 0; i < n; i++) {
        scanf("%f", &a[i]);
    }
}

float input_x() {
    float x;
    scanf("%f", &x);
    return x;
}

float evaluate_polynomial(int n, float a[n], float x) {
    float result = a[n];
    for (int i = n - 1; i >= 0; i--) {
        result = result * x + a[i];
    }
    return result;
}

void output(int n, float a[n], float x, float result) {
    printf("H(");
    for (int i = 0; i <= n; i++) {
        if (i > 0) {
            printf(", ");
        }
        printf("%.2f", a[i]);
    }
    printf(", %.2f) = ", x);
    for (int i = n; i >= 0; i--) {
        if (i != n) {
            printf(" + ");
        }
        printf("%.2f", a[i]);
        if (i > 0) {
            printf(" * %.2f^%d", x, i);
        }
    }
    printf(" = %.7f\n", result);
}
