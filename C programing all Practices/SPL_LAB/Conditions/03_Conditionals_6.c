#include <stdio.h>
int main(){
    int n, i, flag = 0;
    scanf("%d", &n);
    if(n==0){
        printf("Zero is not a valid input");
    }
    else if(n<0){
        printf("Negative input is not valid");
    }
    else{
        for (i = 1; i <= n; i = i * 2){
            if(i==n){
                flag=1;
                break;
            }
        }
        if(flag==1)
            printf("Yes");
        else
            printf("No");
    }
    return 0;
}