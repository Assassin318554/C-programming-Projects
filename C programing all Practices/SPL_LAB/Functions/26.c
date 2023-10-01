#include<stdio.h>

void InputMatrix(int M,int N,int n,int arr[M][N]){
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    return;
}

void ShowMatrix(int M,int N,int n,int arr[M][N]){
    printf("Original:\n");
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return;
}

void ScalarMultiply(int M, int N, int n, int arr[M][N]){
    printf("Multiplied by %d:\n",n);
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            printf("%d ",n*arr[i][j]);
        }
        printf("\n");
    }
    return;
}

int main(){
    int M,N,n;
    scanf("%d%d",&M,&N);
    int arr[M][N];
    InputMatrix(M,N,n,arr);
    scanf("%d",&n);
    printf("\n");
    ShowMatrix(M,N,n,arr);
    printf("\n");
    ScalarMultiply(M,N,n,arr);
    return 0;
}