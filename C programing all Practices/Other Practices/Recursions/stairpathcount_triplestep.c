#include<stdio.h>
int stair(int n){
    if(n==1 || n==2) return n;
    if(n==3) return 4;
    int totalways = stair(n-1)+stair(n-2)+stair(n-3);
    return totalways;
}
int main(){
    int n;
    printf("\nEnter 'n' to find n way to climb stairs: ");
    scanf("%d",&n);
    int ways = stair(n);
    printf("%d",ways);
    return 0;
}