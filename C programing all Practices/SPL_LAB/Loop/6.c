#include <stdio.h>
int main(){
    int n, flag = 0;
    scanf("%d", &n);
    int t;
    scanf("%d", &t);
    while (t--){
        int a;
        scanf("%d", &a);
        if (a != n){
            printf("Wrong, %d choice left\n", t);
        }
        if (a == n){
            printf("Right, player 2 wins");
            flag = 1;
            break;
        }
    }
    if (flag == 0){
        printf("player 1 wins");
    }
    return 0;
}