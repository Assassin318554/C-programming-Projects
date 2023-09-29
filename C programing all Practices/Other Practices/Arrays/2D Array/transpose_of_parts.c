#include<stdio.h>
int main(){
    int r, c;
    printf("\nEnter number of rows and colomns(rows=colomns): ");
    scanf("%d",&r);
    printf("\n");
    int arr[r][r];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < r; j++){
            printf("Enter %d%d element of 1st matrix: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < r; i++){
        for (int j = 0; j < r; j++){
            if (j>=i){
                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
        printf("\n");
    }
    for (int i = 0; i < r; i++){
        for (int j = 0; j < r; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}