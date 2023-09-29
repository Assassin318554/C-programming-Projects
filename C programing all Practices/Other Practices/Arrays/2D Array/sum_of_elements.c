#include<stdio.h>
int main(){
    int r, c, sum=0;
    printf("\nEnter number of rows: "); //for adding two matrix, row and colomn number must be same.
    scanf("%d",&r);
    printf("Enter number of colomns: ");
    scanf("%d",&c);
    printf("\n");
    int arr[r][c];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            printf("Enter element no %d%d: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            sum += arr[i][j];
        }
    }
    printf("Sum = %d",sum);
    return 0;
}