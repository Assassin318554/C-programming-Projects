#include<stdio.h>
int fib(int n){
    if(n==1||n==2) return 1;
    //fib(n) = fib(n-1)+fib(n-2);
    return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    printf("\nEnter 'n' to find n'th fibonacchi number: ");
    scanf("%d",&n);
    printf("%d",fib(n));
    return 0;
}