#include <stdio.h>
int main(){
    int n, r,factn = 1,factr = 1,factnr = 1, nCr;
    scanf("%d%d", &n, &r);
    for (int i = 1; i <= n; i++){
        factn = factn * i;
    }
    for (int i = 1; i <= r; i++){
        factr = factr * i;
    }
    for (int i = 1; i <= n-r; i++){
        factnr = factnr * i;
    }
    nCr = (factn)/((factr)*(factnr));
    printf("%d", nCr);
    return 0;
}