//Write a program to find Sum of composite number in an array of different numbers entered by the user.

#include<stdio.h>
#include<math.h>

int input_array_size()
{
    int n;
    printf("enter the array size:\n");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n])
{
    printf("enter the array values:\n");
    for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]); 
    }
}

int sum_composite_numbers(int n, int a[n])
{   int i,sum=0;
    for(i=0;i<n;i++){
         if(a[i]<=2){
            break;
            }
        else{
            for(int j=2;j<sqrt(a[i])+1;j++){
                if(a[i]%j==0){
                    sum+=a[i];
                    break;
                }
            }
        }
    }
    return sum;
}

void output(int sum, int n, int a[n]) 
{
    printf("Composite numbers:\n ");
    for(int i = 0;i <n;i++) 
    { 
        {
            printf("%d\t", a[i]);
        }
    }
    printf("Sum of composite numbers: %d\n", sum);
}
int main()
{
    int n,sum;
    n=input_array_size();
    int a[n];
    input_array(n,a);
    sum=sum_composite_numbers(n,a);
    output(sum,n,a);
    return 0;
}