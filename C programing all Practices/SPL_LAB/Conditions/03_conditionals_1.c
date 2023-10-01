#include<stdio.h>
int main(){
    float n;
    scanf("%f", &n);
    if(n < 0)
        printf("Negative");
    else 
        printf("Positive");
    return 0;
}
