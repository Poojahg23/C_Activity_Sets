/*06. Write a program to reverse a string.

***Function Declarations***
```c
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
```

***Input***
```
hello
```

***Output***
```
olleh
```

---*/

#include <stdio.h>
#include <string.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main() {
    char str[100], reverse_str[100];
    input_string(str);
    str_reverse(str, reverse_str);
    output(str, reverse_str);

    return 0;
}

void input_string(char *a) {
    printf("Enter a string: ");
    scanf("%s", a);
}

void str_reverse(char *str, char *rev_str) {
    int length = strlen(str);

    for (int i = 0; i < length; i++){
        rev_str[i] = str[length - 1 - i];
    }

    rev_str[length] = '\0';
}

void output(char *a, char *reverse_a) {
    printf("Original string: %s\n", a);
    printf("Reversed string: %s\n", reverse_a);
}
