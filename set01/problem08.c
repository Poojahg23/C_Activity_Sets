/*8.Write a C program to find sum of _n_ different numbers entered by the user.
***Function Declarations***

```c
int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);
```

***Input***
```
Input array size: 3
Input the array:
1 7 11
```

***Output***
```*/

#include <stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);

int main(){
    int n,sum;
    n=input_array_size();
    int a[n];
    sum=sum_n_array(n,a);
    input_array(n,a);
    output(n,a,sum);
    return 0;
}

int input_array_size(){
    int n;
    printf("enter the size of array:\n");
    scanf("%d",&n);
    return n;
}

void input_array(int n,int a[n]){
    int i=0;
    printf("enter the array: \n");
    for(i=0;i<=n;i++){
        scanf("%d",&a[i]);
    }
}

int sum_n_array(int n , int a[n]){
    int i=0,sum=0;
    for(i=0;i<=n;i++){
        sum=sum+a[i];
    }
    return sum;
}

void output(int n, int a[n],int sum){
    printf("the sum is %d:\n",sum);
}