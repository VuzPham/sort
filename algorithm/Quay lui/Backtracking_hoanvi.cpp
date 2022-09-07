#include <stdio.h>

int n;
bool used[100];
int a[100];

void show(){
    for (int i = 1; i <=n ;i++)
        printf ("%d ",a[i]);
    printf ("\n");
}

void backtracking (int pos){
    if (pos == n + 1){
        show();
        return;
    }
    for (int i = 1; i <= n; i++){
        if (!used[i]){
            a[pos] = i;
            used[i] = true;
            backtracking(pos + 1);
            used[i] = false;
        }
    }
}
int main(){
    n = 3;
    backtracking(1);
    return 0;
}