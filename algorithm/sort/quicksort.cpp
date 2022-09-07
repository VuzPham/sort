#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

void quicksort(int a[], int left, int right){
    int i,j,x;
    if (left >= right){
        return;
    }
    x = a[(left + right)/2];
    i = left, j = right;
    while (i < j){
        while (a[i] < x)
            i++;
        while (a[j] > x)
            j--;
        if ( i <= j){
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    quicksort(a,left,j);
    quicksort(a,i,right);
}
int main (){
    int left, right;
    srand((int)time(0));
    int *a = (int*)malloc (5 * sizeof(int));
    for (int i = 0; i < 5; i++){
        a[i] = rand()%10;
        printf ("%4d",a[i]);
    }
    printf ("\n");
    quicksort(a,0,5);
    for (int i = 0; i < 5; i++){
        printf ("%4d",a[i]);
    }
}