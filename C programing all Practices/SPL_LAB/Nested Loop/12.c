#include <stdio.h>
int main(){
    int n, k;
    scanf("%d", &n);
    int i = 1;
    for(int i = 1;i <= n;i++){
        if (i <= (n+1)/2){
            for (int j = 1; j <= n; j++){
                if (j >= ((n+1)/2)-(i-1) && j <= ((n+1)/2)+(i-1))
                    printf("*");
                else if (j < ((n+1)/2)-(i-1))
                    printf("_");
            }
            k = i;
            k--;
        }
        else if (i > (n+1)/2){
            for (int j = 1; j <= n; j++){
                if (j >= ((n+1)/2)-(k-1) && j <= ((n+1)/2)+(k-1))
                    printf("*");
                else if (j < ((n+1)/2)-(k-1))
                    printf("_");
            }
            k--;
        }
        printf("\n");
    }
    return 0;
}
/*#include <stdio.h>
int main(){
    int n,space;
    scanf("%d",&n);
    space = n/2;
    for(int i = 1; i <= n; i+=2){
        for(int j = 1; j <= space; j++)
            printf("_");
        for(int k = 1; k <= i; k++)
            printf("*");
        space--;
        printf("\n");
    }
    space = n/2;
    for(int i = n-1; i >= 1; i-=2){
        for(int j = n/2; j >= space; j--)
            printf("_");
        for(int k = 0; k < i-1; k++)
            printf("*");
        space--;
        printf("\n");
    }
    return 0;
}*/