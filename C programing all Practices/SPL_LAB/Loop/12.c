#include <stdio.h>
int main(){
    int n, x = 1, y = 1, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        if(i % 2 != 0){
            if(i==n)
                printf("%d",x);
            else 
                printf("%d,",x);
            x = x + y;
        }
        else if(i % 2 == 0){
            if(i==n)
                printf("%d",y);
            else 
                printf("%d,",y);
            y = x + y;
        }
    }
    return 0;
}