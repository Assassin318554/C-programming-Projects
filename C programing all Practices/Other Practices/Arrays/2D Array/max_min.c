#include<stdio.h>
int main(){
    int r, c, idx1, idx2, idx3, idx4;
    printf("\nEnter number of rows of two matrix: "); 
    scanf("%d",&r);
    printf("Enter number of colomns of two matrix: ");
    scanf("%d",&c);
    printf("\n");
    int arr[r][c];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            printf("Enter %d%d element of 1st matrix: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    int max=arr[0][0],min=arr[0][0];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            if(arr[i][j]>=max){
                max = arr[i][j];
                idx1= i;
                idx2= j;
            }
            if(arr[i][j]<=min){
                min = arr[i][j];
                idx3= i;
                idx4= j;
            }
        }
    }
    printf("\nMax = %d and its index is (%d,%d).", max, idx1, idx2);
    printf("\nMin = %d and its index is (%d,%d).", min, idx3, idx4);
    return 0;
}