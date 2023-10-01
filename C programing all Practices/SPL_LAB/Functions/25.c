#include<stdio.h>

void InputMatrix(int arr[3][5]){
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    return;
}

void ShowMatrix(int arr[3][5]){
    printf("Original:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return;
}

void ScalarMultiply(int arr[3][5],int n){
    printf("Multiplied by %d:\n",n);
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            printf("%d ",n*arr[i][j]);
        }
        printf("\n");
    }
    return;
}

int main(){
    int n,arr[3][5];
    InputMatrix(arr);
    scanf("%d",&n);
    printf("\n");
    ShowMatrix(arr);
    printf("\n");
    ScalarMultiply(arr,n);

    return 0;
}