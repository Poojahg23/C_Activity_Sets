#include <stdio.h>
#include <string.h>

void input_string(char *a) {
    printf("Enter a string: ");
    fgets(a, 100, stdin);
}

int count_words(char *string) {
    int count = 0;
    char *token = strtok(string, " ");
    while(token != NULL) {
        count++;
        token = strtok(NULL, " ");
    }
    return count;
}

void output(char *string, int no_words) {
    printf("The number of words in \"%s\" is %d\n", string, no_words);
}

int main() {
    char string[100];
    input_string(string);
    int no_words = count_words(string);
    output(string, no_words);
    return 0;
}
