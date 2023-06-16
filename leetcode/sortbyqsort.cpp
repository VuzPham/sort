#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b){
    int *x = (int*)a;
    int *y = (int*)b;
    if (*x > *y){
        return -1;
    }
    return 1;
}

int main(){
    int n = 10;
    int a[10] = {3,1,5,13,5,7,9,4,12,6};
    qsort(a,n,sizeof(int),cmp);
    for (int i = 0; i < n; i++){
        printf ("%d ",*(a+i));
    }
    return 0;
}