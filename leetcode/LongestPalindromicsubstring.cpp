#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char * longestPalindrome(char * s){
    int start = 0, len = strlen(s), left, right, max = 1;

    // input string validation
    if(len == 0) return "";

    // Consider every character as center point of even and length palindromes
    for (int i = 0; i < len; i++) {
        // Find the longest even length palindrome with center points as i and i+1.
        left = i;
        right = i + 1;
        while (left >= 0 && right < len && s[left] == s[right]) {
            if (right - left + 1 > max) {
                start = left;
                max = right - left + 1;
            }
            left--;
            right++;
        }

        // Find the longest odd length palindrome with center point as i
        left = i;
        right = i;
        while (left >= 0 && right < len && s[left] == s[right]) {
            if (right - left + 1 > max) {
                start = left;
                max = right - left + 1;
            }
            left--;
            right++;
        }
    }

    // allocate and form the result
    char *res = (char *)calloc(start + max + 1,sizeof(char));
    int i = 0;
    for(int j = start; i < max; i++,j++)
        res[i] = s[j];
    return res;
}