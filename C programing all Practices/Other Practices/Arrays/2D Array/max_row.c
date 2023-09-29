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
    int maxrowsum=0,maxrow,rowsum=0;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            rowsum += arr[i][j]; 
        }
        if (rowsum>= maxrowsum){
            maxrowsum=rowsum;
            maxrow=i+1;
        }
        rowsum=0;
    }
    printf("\nMax Row sum = %d.", maxrowsum);
    printf("\nMax Row is = %d.", maxrow);
    
    return 0;
}