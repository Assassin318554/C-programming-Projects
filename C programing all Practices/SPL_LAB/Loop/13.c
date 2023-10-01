#include<stdio.h>
int main(){
    int n, factn = 1;
    scanf("%d",&n);
    printf("%d! = ",n);
    for (int i = n; i >= 1; i--){
        if(i > 1){
            factn = factn * i;
            printf("%d X ",i);
        }
        else{
            factn = factn * i;
            printf("%d = ",i);
            printf("%d",factn);
        }
    }
    return 0;
}