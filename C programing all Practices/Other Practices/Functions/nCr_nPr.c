#include <stdio.h>
int fact(int x){
    int factx = 1;
    for (int i = 1; i <= x; i++){
        factx = factx * i;
    }
    return factx;
}
int combination(int n, int r){
    int x;
    x= (fact(n))/(fact(r)*fact(n-r));
    return x;
}
int permutation(int n, int r){
    int y;
    y= (fact(n))/(fact(n-r));
    return y;
}
int main(){
    int n, r, C, P;
    printf("\nEnter 'n' and 'r': ");
    scanf("%d%d", &n, &r);
    C = combination(n, r);
    P = permutation(n, r);
    printf("\nnCr= %d and nPr= %d", C, P);
    return 0;
}