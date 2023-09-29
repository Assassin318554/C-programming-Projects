#include <stdio.h>
int main(){
    int arr[3][3], brr[3][3], crr[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d", &brr[i][j]);
        }
    }
    // Multiplication:
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            int sum = 0;
            for (int k = 0; k < 3; k++){
                sum += arr[i][k] * brr[k][j];
            }
            crr[i][j] = sum;
        }
    }
    printf("\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", crr[i][j]);
        }
        printf("\n");
    }

    return (0);
}