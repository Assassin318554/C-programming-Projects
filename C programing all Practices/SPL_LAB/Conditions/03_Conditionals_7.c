#include <stdio.h>
int main(){
    int X, Y;
    scanf("%d%d", &X, &Y);
    if (X > Y)
        printf("\n%d is greater than %d", X, Y);
    else if (X < Y)
        printf("\n%d is less than %d", X, Y);
    else
        printf("\n%d is Equal to %d", X, Y);
    return 0;
}