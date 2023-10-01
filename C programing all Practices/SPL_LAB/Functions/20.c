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

void GenNthPrime(int n){
    int count=0;
    if(n==1) printf("1st Prime: ",n);
    else if(n==2) printf("2nd Prime: ",n);
    else if(n==3) printf("3rd Prime: ",n);
    else printf("%dth Prime: ",n);
    for(int i=2;;i++){
        IsPrime(i);
        if(IsPrime(i) == 1){
            count++;
        }
        if(count==n){
            printf("%d",i);
            break;
        }
    }
    return;
}

int main(){
    int n;
    scanf("%d",&n);
    GenNthPrime(n);
    return 0;
}