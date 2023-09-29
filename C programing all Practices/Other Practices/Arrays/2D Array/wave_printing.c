#include<stdio.h>
int main(){
    int r, c;
    printf("\nEnter number of rows and colomns of the matrix: ");
    scanf("%d%d",&r,&c);
    printf("\n");
    int arr[r][c];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            printf("Enter %dx%d element of 1st matrix: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < r; i++){
        if(i%2==0){
            for (int j = 0; j < c; j++){
                printf("%d  ", arr[i][j]);
            }
        }
        else{
            for (int j = c-1; j >= 0; j--){
                printf("%d  ", arr[i][j]);
            }
        }
    }
    return 0;
}