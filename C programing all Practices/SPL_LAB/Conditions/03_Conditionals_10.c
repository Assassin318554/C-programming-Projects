#include<stdio.h>
#include<math.h>
int main(){
    float a, b;
    char c;
    scanf("%f %c%f", &a,&c,&b);
    switch (c){
    case '+':
        if(floor(a + b) == a + b)
            printf("Addition: %d", (int)(a + b));
        else
            printf("Addition: %f", a + b);
        break;
    case '-':
        if(floor(a - b) == a - b)
            printf("Subtruction: %d", (int)(a - b));
        else
            printf("Subtruction: %f", a - b);
        break;
    case '*':
        if(floor(a * b) == a * b)
            printf("Multiplication: %d", (int)(a * b));
        else
            printf("Multiplication: %f", a * b);
        break;
    case '/':
        if (b != 0){
            if(floor(a / b) == a / b)
                printf("Division: %d", (int)(a / b));
            else
                printf("Division: %f", a / b);
        }
        else
            printf("Division: Zero as divisor is not valid!");
        break;
    default:
        printf("Wrong Input!!!");
    }
    return 0;
}