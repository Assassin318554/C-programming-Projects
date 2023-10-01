#include<stdio.h>
void print(int n,int m){
    if(n>m) printf("%d is greater than %d",n,m);
    else if(n<m) printf("%d is less than %d",n,m);
    else printf("%d is equal %d",n,m);
    return;
}
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    print(n,m);
    return 0;
}