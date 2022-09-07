#include <stdio.h>
#include <stdlib.h>
void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}
int binary_search(int a[], int x){
    int left = 0, right = 4;
    while (left <= right){
    int mid = (left + right)/2;
        if (a[mid] == x)
            return mid;
        else if (a[mid] > x)
            right = mid - 1;
        else 
            left = mid + 1;
    }
    return -1;
}

int main (){
    int x;
    int *a = (int*)malloc (5 * sizeof(int));
    for (int i = 0; i < 5; i++){
        a[i] = rand()%10;
        printf ("%4d",a[i]);
    }
    printf ("\n");
    for (int i = 0; i < 4; i++){
        for (int j = i + 1; j < 5; j++){
            if (a[i] > a[j])
                swap(a[i],a[j]);
        }
    }
    for (int i = 0; i < 5; i++){
        printf ("%4d",a[i]);
    }
    printf ("\nNhap x\n");
    scanf ("%d",&x);
    printf ("tim thay vi tri %d",binary_search(a,x)+1);   
    
}