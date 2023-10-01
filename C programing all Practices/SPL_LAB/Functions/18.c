#include<stdio.h>
void IsPrime(int n){
    int flag = 0;
    if(n<=1)
        flag=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("Prime");
    else
        printf("Not Prime");
    return;
}
int main(){
    int n;
    scanf("%d",&n);
    IsPrime(n);
    return 0;
}