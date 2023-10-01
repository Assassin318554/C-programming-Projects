#include <stdio.h>
int main(){
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
            if(i%2==0){
                if(j==1||j==n) 
                    printf("*");
                else 
                    printf("_");
            }
            else 
                printf("*");
        }
        printf("\n");
    }
    return 0;
}