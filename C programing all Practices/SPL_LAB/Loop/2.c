#include <stdio.h>
int main(){
    int n,a=1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        if(i < n)
            printf("%d,",a);
        else if( i== n)
            printf("%d",a);
        a=a+2;
    }
    return 0;
}