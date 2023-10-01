#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i < ((n+1)/2) || i > ((n+1)/2)){
                if(j == 1 || j == n)
                    printf("H ");
                else 
                    printf("  ");
            }
            else if(i == ((n+1)/2))
                printf("H ");
        }
        printf("\n");
    }
    return 0;
}