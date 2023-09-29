#include <stdio.h>
int main(){
    int m, n, count = 0;
    scanf("%d%d", &m, &n);
    int arr[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    int total_element = m * n;
    int minrow = 0, maxcolumn = n - 1, maxrow = m - 1, mincolumn = 0;
    while (count < total_element){
        // Printing the minimum row:
        for (int j = mincolumn; j <= maxcolumn && count < total_element; j++){
            printf("%d ", arr[minrow][j]);
            count++;
        }
        minrow++;
        //if(count >= total_element) break;

        // Printing the maximum colomn:
        for (int k = minrow; k <= maxrow && count < total_element; k++){
            printf("%d ", arr[k][maxcolumn]);
            count++;
        }
        maxcolumn--;
        //if(count >= total_element) break;

        // Printing the maximum row:
        for (int l = maxcolumn; l >= mincolumn && count < total_element; l--){
            printf("%d ", arr[maxrow][l]);
            count++;
        }
        maxrow--;
        //if(count >= total_element) break;

        // Printing the minimum colomn:
        for (int i = maxrow; i >= minrow && count < total_element; i--){
            printf("%d ", arr[i][mincolumn]);
            count++;
        }
        mincolumn++;
        //if(count >= total_element) break;
    }
    return 0;
}