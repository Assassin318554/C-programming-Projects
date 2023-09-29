#include <stdio.h>
int main(){
    int m, n, sum = 0;
    scanf("%d%d", &m, &n);
    int arr[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < (n-1)/2; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[i][n-1-j];
            arr[i][n-1-j] = temp;
        }
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}