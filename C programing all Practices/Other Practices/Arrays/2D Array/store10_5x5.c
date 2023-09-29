#include <stdio.h>
int main()
{
    int marks[5][5];
    printf("\n");
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            printf("Enter an integer: ");
            scanf("%d", &marks[i][j]);
        }
    }
    printf("\n");
    printf("\n");
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            printf("%d ",marks[i][j]);
        }
        printf("\n");

    }

    return 0;
}