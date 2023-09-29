#include<stdio.h>
int mazepath(int cr,int cc,int er,int ec){
    int rightways=0;
    int downways=0;
    if(cc==ec && cr==er) return 1;
    if(cr==er){
        rightways += mazepath(cr,cc+1,er,ec);
    }
    if(cc==ec){
        downways += mazepath(cr+1,cc,er,ec);
    } 
    if(cr<er && cc<ec){
        rightways += mazepath(cr,cc+1,er,ec);
        downways += mazepath(cr+1,cc,er,ec);
    }
    int totalWays = rightways + downways;
    return totalWays;
}
int main(){
    int n,m;
    printf("\nEnter n & m to find mazepath from (1,1) to (n,m):");
    scanf("%d%d",&n,&m);
    int noOfWays = mazepath(1,1,n,m);
    printf("%d",noOfWays);
    return 0;
}