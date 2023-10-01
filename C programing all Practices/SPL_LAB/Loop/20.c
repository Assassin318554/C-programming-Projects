#include <stdio.h>
int main(){
    int i, n = 1, x = 1, a, sum = 0;
    scanf("%d", &a);
    for (int i = 1; i <= a - 1; i++){
        n = n + 1;
        x = x * 10 + n;
        sum = sum + x;
    }
    printf("%d", sum + 1);
    return 0;
}