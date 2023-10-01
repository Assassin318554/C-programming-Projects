#include<stdio.h>
#include<math.h>
int main(){
    float a, b;
    char c, d;
    scanf("%f%f", &a,&b);
    scanf(" %c",&c);
    switch (c){
    case '1':
        if(floor(a + b) == a + b)
            printf("Addition: %d", (int)(a + b));
        else
            printf("Addition: %f", a + b);
        break;
    case '2':
        if(floor(a - b) == a - b)
            printf("Subtruction: %d", (int)(a - b));
        else
            printf("Subtruction: %f", a - b);
        break;
    case '3':
        if(floor(a * b) == a * b)
            printf("Multiplication: %d", (int)(a * b));
        else
            printf("Multiplication: %f", a * b);
        break;
    case '4':
        if (b != 0){
            scanf(" %c", &d);
            switch (d){
            case '1':
                printf("Quotient: %d", (int)a / (int)b);
                break;
            case '2':
                printf("Remainder: %d", (int)a % (int)b);
                break;
            default:
                printf("Wrong Input!!!\tTry with '1' or '2'");
            }
        }
        else
            return 0;
        break;
    default:
        printf("Wrong Input!!!\tTry with '1' or '2' or '3' or '4' ");
    }
    return 0;
}