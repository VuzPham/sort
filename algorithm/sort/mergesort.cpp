#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}
void merge(int a[], int left,int mid, int right){
    int i = left;
    int j = mid;
    int n = right - left ;
    int k = 0;
    int *b = (int*)malloc (n * sizeof(int));
    while (i < mid + 1 && j < right + 1){
        if (a[i] < a[j]){
            b[k] = a[i];
            i++;k++;
        }
        else{
            b[k] = a[j];
            j++;k++;
        }
    } 
    while (i < mid + 1){
        b[k] = a[i];
        i++;k++;
    }
    while (j < right + 1){
        b[k] = a[j];
        j++;k++;
    }
    i = left;
    for (int k = 0; k < n; k++){
        a[i] = b[k];
        i++;
    }
    delete []b;
}
void mergesort(int a[], int left, int right){
    if (left < right){
        int mid = (left + right) / 2;
        mergesort(a,left,mid);
        mergesort(a,mid+1,right);
        merge(a,left,mid,right);
    }
}

int main (){
    srand((int)time(0));
    int *a = (int*)malloc (5 * sizeof(int));
    for (int i = 0; i < 5; i++){
        a[i] = rand()%10;
        printf ("%4d",a[i]);
    }
    printf ("\n");
    mergesort(a,0,4);
    for (int i = 0; i < 5; i++){
        printf ("%4d",a[i]);
    }
}