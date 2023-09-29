#include<stdio.h>
//parameterised way of increasing:
void print(int x,int n){
    if(x>n) return;
    else{
        printf("%d ",x);
        print(x+1,n);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    print(1,n);
    return 0;
}