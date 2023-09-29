#include <stdio.h>
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int arr[m][n],brr[m][n],crr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            crr[i][j]=arr[i][j]+brr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",crr[i][j]);
        }
        printf("\n");
    }
    return 0;
}