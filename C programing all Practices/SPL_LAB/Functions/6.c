#include<stdio.h>
int sumation(int n){
    int sum = 0,a;
    for (int i = 1; i <= n; i++){
        scanf("%d",&a);
        sum += a;
    }
    printf("Sum In Function: %d\n",sum);
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int S = sumation(n);
    printf("Sum In main: %d\n",S);
    
    return 0;
}