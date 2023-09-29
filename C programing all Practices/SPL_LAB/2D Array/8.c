#include<stdio.h>
int main(){
    int r, c, idx1, idx2; 
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int max=arr[0][0];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            if(arr[i][j]>=max){
                max = arr[i][j];
                idx1= i;
                idx2= j;
            }
        }
    }
    printf("Max: %d", max);
    printf("\nLocation: [%d][%d]", idx1,idx2);
    return 0;
}