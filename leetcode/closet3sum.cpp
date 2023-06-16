#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cmp(const void *a, const void *b){
    int *x = (int*)a;
    int *y = (int*)b;
    if (*x > *y)return 1;
        return -1;
}
int threesum(int* a, int n, int target){
    int temp1,temp2,second,third, limit = n - 1;
    int result = a[0] + a[1] + a[2];
    int dis = abs(result - target);
    qsort (a,n,sizeof(int),cmp);
    for (int first = 0; first < limit; first++){
        second = first + 1;
        third = limit;
        while (second < third){
            temp1 = a[first] + a[second] + a[third];
            temp2 = abs(temp1-target);
            if (temp2 < dis){
                dis = temp2;
                result = temp1;
            }
            if (result == target) return result;
            else if (temp1 > target) third --;
            else if(temp1 < target) second ++;
        }
    }
    return result;
}
int main (){
    int a[10] = {-1,2,1,4};
    int n = 4;
    int target = 1;
    printf ("%d",threesum(a,n,target));
    return 0;
}