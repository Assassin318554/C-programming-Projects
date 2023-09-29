#include<stdio.h>
int main(){
    int r, c;
    printf("\nEnter number of rows of two matrix: ");
    scanf("%d",&r);
    printf("Enter number of colomns of two matrix: ");
    scanf("%d",&c);
    printf("\n");
    int arr[r][c],brr[c][r];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            printf("Enter %d%d element of 1st matrix: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < c; i++){
        for (int j = 0; j < r; j++){
            brr[i][j]=arr[j][i];
        }
        printf("\n");
    }
    for (int i = 0; i < c; i++){
        for (int j = 0; j < r; j++){
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}