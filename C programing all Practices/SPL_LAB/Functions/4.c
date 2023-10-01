#include<stdio.h>
void print(int n){
    if(n<0) printf("negative");
    else if(n>0) printf("positive");
    else printf("zero");
    return;
}
int main(){
    int n;
    scanf("%d",&n);
    print(n);
    return 0;
}