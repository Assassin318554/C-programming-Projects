#include <stdio.h>
int main(){
    int n, y, a, x = 0;
    scanf("%d", &n);
    y = n;
    while(n > 0){
        a = n % 10;
        x = x * 10 + a;
        n = n / 10;
    }
    if(x == y)
        printf("Yes");
    else 
        printf("No");
    return 0;
}