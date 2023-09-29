#include<stdio.h>

int sumation(int n){
    if(n==1) return 1;
    int recAns = n + sumation(n-1); 
    return recAns;
}

int main(){
    int n;
    scanf("%d",&n);    
    printf("%d",sumation(n));
    return 0;
}