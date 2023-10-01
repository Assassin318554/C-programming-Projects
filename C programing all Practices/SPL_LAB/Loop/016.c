#include <stdio.h>
int main(){
    int m, n, rem, min, G, L;
    scanf("%d%d", &m, &n);
    min = ((m > n) ? n : m);
    for (int i = min; i >= 1; i--){
        if (m % i == 0 && n % i == 0){
            G = i;
            break;
        }
    }
    L = (m * n) / G;
    printf("GCD: %d\nLCM: %d", G, L);
    return 0;
    }