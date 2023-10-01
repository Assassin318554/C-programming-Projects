#include<stdio.h>
int main(){
    int X,Y1,Y2,Y3;
    scanf("%d", &X);

    scanf("%d", &Y1);
        if (X == Y1) 
            printf("Right, Player-2 wins!");
        else 
            printf("Wrong, 2 Chance(s) Left!\n");
    scanf("%d", &Y2);
        if (X == Y2)
            printf("Right, Player-2 wins!");
        else
            printf("Wrong, 1 Chance(s) Left!\n");
    scanf("%d", &Y3);
        if (X == Y3) 
            printf("Right, Player-2 wins!");
        else {
            printf("Wrong, 0 Chance(s) Left!\n");
            printf("Player-1 wins!");
        }
        
    return 0;
}
