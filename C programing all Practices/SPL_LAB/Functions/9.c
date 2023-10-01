#include<stdio.h>
void fact(int n){
    int f = 1;
    for (int i = 1; i <= n; i++){
        f = f * i;
    }
    printf("%d",f);
    return;
}
int main(){
    int n;
    scanf("%d",&n);
    fact(n);
    return 0;
}