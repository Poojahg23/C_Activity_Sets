#include<stdio.h>

void input_strings(char *string1, char *string2);
int compare_the_strings(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main()
{
  char string1[100],string2[100];
  input_strings(string1, string2);
  int result = compare_the_strings(string1, string2);
  output(string1, string2, result);
  return 0;
}

void input_strings(char *string1, char *string2)
{
  printf("Enter the first string : \n");
  scanf("%s", string1);
  printf("Enter the second string : \n");
  scanf("%s", string2);
}

int compare_the_strings(char *string1, char *string2)
{
  int i=0;
  for (i=0 ; string1[i]!='\0' && string2[i]!= '\0' && string1[i]==string2[i] ; i++); 
    if(string1[i] > string2[i])
    {
      return -1;
    }
    else if (string1[i]< string2[i])
    {
    return 1; 
    }
    else{
      return 0;
    }
}
void output(char *string1, char *string2, int result)
{
  if(result > 0)
  {
    printf("%s is Greater than %s.", string1,string2);
  }
  else if(result < 0)
  {
    printf("%s is lesser than %s.", string1,string2);
  }
  else if(result == 0)
  {
    printf("%s is equal to %s.",string1,string2);
  }
}

