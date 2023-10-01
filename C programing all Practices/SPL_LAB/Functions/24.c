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

int LCM(int a, int b, int G){
    int L = (a*b)/G;
    return L;
}

int main(){
    int a, b, G, L;
    for(int i=0;;i++){
        scanf("%d%d", &a,&b);
        G = GCD(a, b);
        L = LCM(a, b, G);
        printf("GCD: %d\nLCM: %d\n", G,L);
    }
    return 0;
}