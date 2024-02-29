

#include <stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main()
{
    int n, sum;
    n = input_array_size();
    int array[n];
    input_array(n, array);
    sum = sum_composite_numbers(n, array);
    output(sum);
    return 0;
}

int input_array_size()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    return n;
}

void input_array(int n, int a[n])
{
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

int sum_composite_numbers(int n, int a[n])
{
    for(int i=2;i<=sqrt(n);i++)
    {
       
    }
}
void output(int sum)
{
    printf("Sum of composite numbers in the array: %d\n", sum);
}