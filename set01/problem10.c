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

#include<stdio.h>

char input_strings(char *string1, char *string2);
char compare_the_strings(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main()
{
  char string1[100],string2[100];
  input_strings(string1, string2);
  int result = compare_the_strings(string1, string2);
  output(string1, string2, result);
  return 0;
}

char input_strings(char *string1, char *string2)
{
  printf("Enter the first string : \n");
  scanf("%s", string1);
  printf("Enter the second string : \n");
  scanf("%s", string2);
  return 0;
}

char compare_the_strings(char *string1, char *string2)
{
  int i=0;
  for (i=0 ; string1[i]!='\0' && string1[i]==string2[i] ; i++); 
  return string1[i] - string2[i];

}
void output(char *string1, char *string2, int result)
{
  if(result > 0)
  {
    printf("%s is Greater than %s", string1,string2);
  }
  else if(result < 0)
  {
    printf("%s is Greater than %s", string2,string1);
  }
  else if(result == 0)
  {
    printf("%s is equal to %s",string1,string2);
  }
}

