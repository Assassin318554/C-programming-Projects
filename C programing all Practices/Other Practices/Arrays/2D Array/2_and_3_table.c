#include <stdio.h>
void table(int arr[][],int n){

}
int main()
{
    int marks[2][10];
    printf("\n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 10; j++){
            printf("Enter %d * %d: ", i + 2, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    printf("\n");
    printf("\n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 10; j++){
            printf("%d * %d = %d\n", i + 2, j + 1, marks[i][j]);
        }
        printf("\n");

    }

    return 0;
}