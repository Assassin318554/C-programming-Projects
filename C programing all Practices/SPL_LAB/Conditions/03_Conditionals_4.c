#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (0<a<180 && 0<b<180 && 0<c<180 && a+b+c==180){
        printf("Yes");
    }
    else
        printf("\nNo");
    return 0;
}