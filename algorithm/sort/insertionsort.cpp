#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}
int main (){
    int t,j;
    srand((int)time(0));
    int *a = (int*)malloc (5 * sizeof(int));
    for (int i = 0; i < 5; i++){
        a[i] = rand()%10;
        printf ("%4d",a[i]);
    }
    printf ("\n");
    for (int i = 1; i < 5; i++){
        j = i - 1;
        t = a[i];
        while(t < a[j] && j >= 0){
            a[j+1] = a[j];
            j--;
            //swap(a[j+1],a[j]);
            //j--;
        }
        a[j+1] = t;
    }
    for (int i = 0; i < 5; i++){
        printf ("%4d",a[i]);
    }
}