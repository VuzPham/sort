#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char* array[9] = {"", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    char *digits = {"45"};
    int size = 1; 
    printf ("%d\n",digits[1] - '1');
    for (int i = 0; i < strlen(digits); i++) {
        size *= strlen(array[digits[i] - '1']);
    }
    printf ("%d",size);
    return 0;
}