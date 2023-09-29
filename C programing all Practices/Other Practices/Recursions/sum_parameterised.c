#include<stdio.h>

void sumation(int n, int sum){
    if(n==0){
        printf("%d",sum);
        return;
    }
    sumation(n-1,sum+n);
    return;
}

int main(){
    int n;
    scanf("%d",&n);    
    sumation(n,0);
    return 0;
}