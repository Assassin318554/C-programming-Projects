#include<stdio.h>
int IsPrime(int n){
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
        return 1;
    else
        return 0;
}

void GeneratePrime(int n){
    printf("Prime less than %d: ",n);
    for(int i=2;i<n;i++){
        IsPrime(i);
        if(IsPrime(i) == 1)
            printf("%d ",i);
    }
    return;
}

int main(){
    int n;
    scanf("%d",&n);
    GeneratePrime(n);
    return 0;
}