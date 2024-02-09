#include <stdio.h>

void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main(){
    char string1[100],string2[100];
    int result;
    input_two_strings(string1,string2); 
    result=stringcompare(string1,string2);
    output(string1,string2,result);
    return 0;
}

void input_two_strings(char *string1, char *string2){
    printf("Enter the first string:");
    scanf("%s", string1);
    printf("Enter the second string:");
    scanf("%s", string2);
}

int stringcompare(char *string1, char *string2){
    int i=0;
    int result=0;
    for(int i=0; string1[i] == string2[i]; i++);
        if(string1[i] > string2[i]){
            return 1 ;
        }
        else if (string1[i] < string2[i]){
            return 0;
        }
    
}
                                                                
void output(char *string1, char *string2, int result){
    if (result == 1){
        printf(" %s string is greater than %s", string1,string2);
    }
    if (result == 0){
        printf(" %s string is lesser than %s.", string1,string2);
    }
    else {
        printf("Both strings are equal.");
    }
}

