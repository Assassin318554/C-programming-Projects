#include <stdio.h>
int main(){
    int arr[3][3], determinant = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    determinant += arr[0][0] * (arr[1][1] * arr[2][2] - arr[1][2] * arr[2][1]);
    determinant -= arr[0][1] * (arr[1][0] * arr[2][2] - arr[1][2] * arr[2][0]);
    determinant += arr[0][2] * (arr[1][0] * arr[2][1] - arr[1][1] * arr[2][0]);
    printf("%d", determinant);
    return 0;
}