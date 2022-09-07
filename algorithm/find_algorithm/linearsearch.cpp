#include <stdio.h>
#include <stdlib.h>
int main (){
    int *a = (int*)malloc (5 * sizeof(int));
    for (int i = 0; i < 5; i++){
        a[i] = rand()%10;
        printf ("%4d",a[i]);
    }
    printf ("\n");
    int x;
    printf ("Nhap x: ");
    scanf ("%d",&x);
    // linearsearch
    for (int i = 0; i < 5; i++){
        if (a[i] == x)
            printf ("tim thay x vi tri %d ",i+1);    
    }
    //========================
}