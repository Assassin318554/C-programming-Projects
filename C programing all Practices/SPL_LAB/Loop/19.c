#include <stdio.h>
#include <math.h>
int main(){
    float x, sum = 0;
    scanf("%f",&x);
    for (int i = 1; i <= 10; i++){
        float factn = 1;
        for (int j = 1; j <= 2 * i - 1; j++)
                factn = factn * j;
        if(i % 2 != 0)
            sum += (pow(x, 2 * i - 1) / factn);
        else
            sum += -(pow(x, 2 * i - 1) / factn);
    }
    printf("%.3f", sum);
    return 0;
}