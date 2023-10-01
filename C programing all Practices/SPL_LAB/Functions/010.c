#include<stdio.h>
void power(int x,int y){
    int result = x;
    for (int i = 1; i < y; i++){
        result = result * x;
    }
    printf("%d to the power %d is %d",x,y,result);
    return;
}
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    power(x,y);
    return 0;
}