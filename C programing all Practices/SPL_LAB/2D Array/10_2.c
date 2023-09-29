#include <stdio.h>
int main(){
    int n, sum = 0;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    // Adding from arr[0][0]:
    for(int j=0;j<=(n-1)/2;j++){
        sum+= arr[0][j];
    }
    for(int i=1;i<n;i++){
        sum+= arr[i][(n-1)/2];
    }
    for(int j=((n-1)/2)+1;j<n;j++){
        sum+= arr[n-1][j];
    }
    // Adding from arr[n-1][0]:
    for(int i=n-1;i>=(n-1)/2;i--){
        sum+= arr[i][0];
    }
    for(int j=1;j<n;j++){
        sum+= arr[(n-1)/2][j];
    }
    for(int i=((n-1)/2)-1;i>=0;i--){
        sum+= arr[i][n-1];
    }
    int middle = arr[(n-1)/2][(n-1)/2];
    // Printing:
    printf("%d", sum - middle);
    return 0;
}