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
#include <string.h>

void input_two_strings(char *string1, char *string2);
int string_compare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main()
{
    int result;
    char string1[100], string2[100];
    input_two_strings(string1, string2);
    result=string_compare(string1, string2);
    output(string1, string2, result);
    return 0;
   
}

void input_two_strings(char *string1, char *string2)
{
  printf("Enter the first string\n");
  scanf("%s", string1);
  printf("Enter the second string\n");
  scanf("%s", string2);
}

int string_compare(char *string1, char *string2)
{
  int i=0;
  for(i=0; string1[i]==string2[i]; i++);

  if(string1[i]>string2[i]){
     return 0;
  }
  else if(string1[i]<string2[i]){
     return 1;
  }
  else{
    return 2;
  } 
}

void output(char *string1, char *string2, int result)
{
  if (result==0){
    printf("%s string is greater than %s string.\n", string1, string2);
    }
  else if(result==1){
    printf("%s string is lesser than %s string.\n ", string1, string2);
  }
  else {
    printf("Both strings are equal.\n");
  }
}