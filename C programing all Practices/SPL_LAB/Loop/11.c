#include <stdio.h>
int main(){
    int n, x = 1, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        sum = sum + x * x * (x + 1);
        x++;
    }
    printf("Result: %d", sum);
    return 0;
}