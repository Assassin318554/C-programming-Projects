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
    x = (fact(n)) / (fact(r) * fact(n - r));
    return x;
}

int main(){
    int c, iCj;
    printf("\nEnter no of colomn: ");
    scanf("%d", &c);
    for (int i = 0; i <= c; i++){
        for (int k = i; k<= c-1; k++){
            printf(" ");
        }
        for (int j = 0; j <= i; j++){
            iCj = combination(i, j);
            printf("%d ", iCj);
        }
        printf("\n");
    }
    getch();
    return 0;
}
