#include<stdio.h>
void print(int n){
    if(n%2!=0) printf("odd");
    else printf("even");
    return;
}
int main(){
    int n;
    scanf("%d",&n);
    print(n);
    return 0;
}