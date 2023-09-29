#include<stdio.h>
int main(){
    int r, c;
    printf("\nEnter number of rows of two matrix: "); //for adding two matrix, row and colomn number must be same.
    scanf("%d",&r);
    printf("Enter number of colomns of two matrix: ");
    scanf("%d",&c);
    printf("\n");
    int arr[r][c],brr[r][c],crr[r][c];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            printf("Enter %d%d element of 1st matrix: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            printf("Enter %d%d element of 2nd matrix: ", i+1, j+1);
            scanf("%d", &brr[i][j]);
        }
    }
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            crr[i][j]=arr[i][j]+brr[i][j];
        }
    }
    printf("\nFinal matrix is:\n");
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            printf("%d\t", crr[i][j]);
        }
        printf("\n");
    }
    return 0;
}