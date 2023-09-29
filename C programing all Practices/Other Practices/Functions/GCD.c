#include <stdio.h>
int min(int a, int b){
    if (a >= b) return a;
    else return b;
}
int GCD(int a, int b){
    int G;
    for (int i = min(a, b); i >= 1; i--){
        if (a % i == 0 && b % i == 0){
            G = i;
            break;
        }
    }
    return G;
}
int main(){
    int a, b, G;
    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Enter another integer: ");
    scanf("%d", &b);
    G = GCD(a, b);
    printf("GCD is: %d", G);
    return 0;
}