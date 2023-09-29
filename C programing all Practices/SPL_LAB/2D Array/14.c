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
        for (int j = 0; j < n; j++){
            if(arr[i][j]!= -1){
                for (int a = 0; a < m; a++){
                    for (int b = 0; b < n; b++){
                        //Example:In 3X3 matrix,indices: 00 < 01 < 02 < 10 < 11 < 12 < 20 < 21 < 22
                        // 00=0*10+0, 01=0*1+1, 02=0*10+2, 10=1*10+0, 11=1*10+1, 12=1*10+2
                        // 20=2*10+1, 21=2*10+1, 22=2*10+2. So,=> ij = i*10+j & ab = a*10+b.
                        // For comparing 'ij' has to be smaller than 'ab'.    ij < ab. So,
                        if(i*10+j < a*10+b && arr[a][b] == arr[i][j])
                            arr[a][b] = -1;
                    }
                }
            }
        }
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}