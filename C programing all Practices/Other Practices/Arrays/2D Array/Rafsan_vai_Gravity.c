#include <stdio.h>
int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    if (1 <= n && m <= 50){
        char arr[n][m];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                scanf(" %c", &arr[i][j]);
            }
        }
        printf("\n");
        int flag = 1;
        while (flag == 1){
            flag = 0;
            for (int i = 0; i < m; i++){
                for (int j = 0; j < n - 1; j++){
                    if (arr[j][i] == 'o' && arr[j + 1][i] == '.'){
                        char temp = arr[j][i];
                        arr[j][i] = arr[j + 1][i];
                        arr[j + 1][i] = temp;
                    }
                }
            }
            for (int i = 0; i < m; i++){
                for (int j = 0; j < n - 1; j++){
                    if (arr[j][i] == 'o' && arr[j + 1][i] == '.'){
                        flag = 1;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                printf("%c", arr[i][j]);
            }
            printf("\n");
        }
    }
    else
        return 0;
    return 0;
}