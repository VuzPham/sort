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
    // buble sort
    for (int i = 0; i < 4; i++){
        for (int j = 4; j > i; j--){
            if (a[j-1] > a[j])
                swap(a[j-1],a[j]);
        }
        
    }
    for (int i = 0; i < 5; i++){
        printf ("%4d",a[i]);
    }
}