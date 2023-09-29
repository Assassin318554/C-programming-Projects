#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Major diagonal: ");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==i)
                printf("%d ",arr[i][j]);
        }
    }
    printf("\nMinor diagonal: ");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==n-i-1)
                printf("%d ",arr[i][j]);
        }
    }
    return 0;
}