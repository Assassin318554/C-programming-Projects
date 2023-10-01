#include <stdio.h>
int main(){
    int n, x = 1, y = -2, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        if(i % 2 != 0){
            x = x + 2;
            sum += x;
        }
        else if(i % 2 == 0){
            y = y - 2;
            sum += y;
        }
    }
    printf("Result: %d",sum);
    return 0;
}