#include <stdio.h>
int main(){
    int flag = 0, n;
    scanf("%d", &n);
    if (n == 0 || n == 1 || n == -1)
        flag = 1;
    for (int i = 2; i <= n - 1; i++){
        if (n % i == 0){
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("Not Prime");
    else
        printf("Prime");
    return 0;
}