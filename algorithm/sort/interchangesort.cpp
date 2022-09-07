#include <stdio.h>
#include <stdlib.h>
void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}
int main (){
    int *a = (int*)malloc (5 * sizeof(int));
    for (int i = 0; i < 5; i++){
        a[i] = rand()%10;
        printf ("%4d",a[i]);
    }
    printf ("\n");
    // interchangesort
    for (int i = 0; i < 4; i++){
        for (int j = i + 1; j < 5; j++){
            if (a[i] > a[j])
                swap(a[i],a[j]);
        }
    }
    //===========================
    for (int i = 0; i < 5; i++){
        printf ("%4d",a[i]);
    }
}