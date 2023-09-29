#include<stdio.h>
void reverse(int arr[], int si, int en){  //reversing part of an array
    for (int i = si, j = en; i < j; i++, j--){
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }
    return;
}
int main(){
    int si, en, r, c;
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
    } //transpose done
    
    for (int i = 0; i < r; i++){
        for (int j = 0; j < r; j++){
               si=0;
               en=r-1;
               reverse(arr,si,en);
        }
        printf("\n");
    } //90 degree rotate done

    for (int i = 0; i < r; i++){ //printing
        for (int j = 0; j < r; j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}