#include<stdio.h>
int mazepath(int n,int m){
    int rightways=0;
    int downways=0;
    if(n==1 && m==1) return 1;
    if(n==1){
        rightways += mazepath(n,m-1);
    }
    if(m==1){
        downways += mazepath(n-1,m);
    } 
    if(n>1 && m>1){
        rightways += mazepath(n,m-1);
        downways += mazepath(n-1,m);
    }
    int totalWays = rightways + downways;
    return totalWays;
}
int main(){
    int n,m;
    printf("\nEnter n & m to find mazepath from (1,1) to (n,m): ");
    scanf("%d%d",&n,&m);
    int noOfWays = mazepath(n,m);
    printf("%d",noOfWays);
    return 0;
}