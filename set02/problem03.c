/*03.  Write a program find whether a number is a composite number

> A Composite number has more than 2 factors.

***Function Declarations***
```c
int input_number();
int is_composite(int n);
void output(int n, int result);
```

***Input***
```
8
```

***Output***
```
8 is a composite number.
```

---*/

#include <stdio.h>
#include<math.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int main() {
    int n, result;
    n = input_number();
    result = is_composite(n);
    output(n, result);
    return 0;
}

int input_number() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;
}

int is_composite(int n) {
    for(int i=2;i<sqrt(n);i++)
    if(n%i==0){
        return 1;
    }
    else{
        return 2;
    }
}

void output(int n, int result) {
    if (result==1) 
    {
        printf("%d is a composite number.\n", n);
    } else 
    {
        printf("%d is not a composite number.\n", n);
    }
}
