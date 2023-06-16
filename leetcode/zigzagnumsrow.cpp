#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

char * convert(char * s, int numRows){
    int len = strlen(s);
    int index = 0;
    char *ret = (char *)malloc (len * sizeof(char));
    int cyclelen = 2 * numRows - 2;
    if (len < numRows || numRows == 1){
        return s;
    }
    for (int i = 0; i < numRows; i++){
        for (int j = 0; j + i < strlen(s); j += cyclelen ){
                ret[index++] = s[j+i];
            if ( i != 0 && i != numRows - 1 && j + cyclelen - i < len){
                ret[index++] = s[j + cyclelen - i];
            }
        }
    }
    return ret;
}

int main (){
    char s[100] = "PAYPALISHIRING";
	int numRows = 4;
    printf ("%s",convert(s,numRows));
    return 0;
}

