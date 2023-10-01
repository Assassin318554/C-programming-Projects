#include <stdio.h>
int main(){
    int n;
    float x, avg = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        scanf("%f",&x);
        avg = avg + x;
    }
    printf("AVG of %d inputs: %f", n, avg/n);

    return 0;
}