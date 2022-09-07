#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}
int main (){
    srand((int)time(0));
    int *a = (int*)malloc (5 * sizeof(int));
    for (int i = 0; i < 5; i++){
        a[i] = rand()%10;
        printf ("%4d",a[i]);
    }
    printf ("\n");
    // selectionsort
    for (int i = 0; i < 4; i++){
        int amin = i;
        for (int j = i + 1; j < 5; j++){
            if (a[j] < a[amin])
                amin = j; 
        }
        swap(a[amin],a[i]);
    }
    //===================================
    for (int i = 0; i < 5; i++){
        printf ("%4d",a[i]);
    }
}