#include<stdio.h>
int sumation(int n){
    int sum = 0,arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
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