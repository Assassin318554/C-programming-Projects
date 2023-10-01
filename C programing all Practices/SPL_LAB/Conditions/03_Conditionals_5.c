#include <stdio.h>
int main(){
    int n, i, flag = 0;
    scanf("%d", &n);
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
    return 0;
}