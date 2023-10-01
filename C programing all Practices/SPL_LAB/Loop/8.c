#include <stdio.h>
int main(){
    int n, y, x = 0;
    scanf("%d", &n);
    while(n > 0){
        y= n % 10;
        x = x * 10 + y;
        n = n / 10;
    }
    printf("%d", x);
    return 0;
}