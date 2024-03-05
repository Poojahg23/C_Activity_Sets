#include <stdio.h>
#include <string.h>

void inputString(char* str, char* sub);
int findSubStrIndex(char* mainStr, char* subStr);
void displayResult(char *mainStr, char *subStr, int index);

int main(){
    char mainString[100], subString[50];
    int index;
    inputString(mainString, subString);
    index = findSubStrIndex(mainString, subString);
    displayResult(mainString, subString, index);
    return 0;
}
void inputString(char* a, char* b) {
    printf("Enter the main string: ");
    scanf("%s", a);
    printf("Enter the substring: ");
    scanf("%s", b);
}

int findSubStrIndex(char* mainStr, char* subStr) {
    int mainLength = strlen(mainStr);
    int subLength = strlen(subStr);

    for (int i = 0; i <= mainLength - subLength; i++) {
        int j;
        for (j = 0; j < subLength; j++) {
            if (mainStr[i + j] != subStr[j]) {
                break;
            }
        }
        if (j == subLength) {
            return i;
        }
    }
    return -1;
}

void displayResult(char *mainStr, char *subStr, int index) {
    if (index != -1) {
        printf("The index of '%s' in '%s' is %d\n", subStr, mainStr, index);
    } else {
        printf("Substring '%s' not found in '%s'\n", subStr, mainStr);
    }
}
