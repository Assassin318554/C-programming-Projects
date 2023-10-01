#include <stdio.h>
int main(){
    int  n, a, y = 1;
    scanf("%d%d", &a, &n);
    for (int i = 1; i <= n; i++){
        y = y * a;
    }
    printf("%d",y);
    return 0;
}