#include<stdio.h>
int fact(int n){
    if(n==0) return 1;
    int recAns = n*fact(n-1);
    return recAns;
}
int main(){
    int n;
    scanf("%d",&n);
    int f = fact(n);
    printf("%d",f);
    return 0;
}