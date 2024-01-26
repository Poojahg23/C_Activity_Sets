/*10. Write a C program to compare two strings, character by character.

> For example, `Hello` should be equal to `Hello`, but not equal to `hello`.

> `Hello` will be lesser than `Hellw` (alphabetical order).

***Function Declarations***

```c
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);
```

***Input***
```
Enter the first string: hello
Enter the second string: world
```

***Output***
```
world is greater than hello
```

---*/

#include <stdio.h>

void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main() {
    char string1[100], string2[100];
    int result;
    input_two_strings(string1, string2);
    result = stringcompare(string1, string2);
    output(string1, string2, result);
    return 0;
}

void input_two_strings(char *string1, char *string2) {
    printf("Enter the first string: ");
    gets(string1);
    printf("Enter the second string: ");
    gets(string2);
}

int stringcompare(char *string1, char *string2) {
    int i = 0;
    while (string1[i] != '\0' && string2[i] != '\0') {
        if (string1[i] < string2[i]) {
            return -1;
        } else if (string1[i] > string2[i]) {
            return 1;
        }
        i++;
    }

    if (string1[i] == '\0' && string2[i] != '\0') {
        return -1;
    } else if (string1[i] != '\0' && string2[i] == '\0') {
        return 1;
    }
    return 0;
}

void output(char *string1, char *string2, int result) {
    if (result < 0) {
        printf("%s is greater than %s\n", string2, string1);
    } else if (result > 0) {
        printf("%s is greater than %s\n", string1, string2);
    } else {
        printf("Both strings are equal\n");
    }
}   