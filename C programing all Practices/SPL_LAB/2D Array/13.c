#include <stdio.h>
int main(){
    int n, flag = 0;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(arr[i][j] != arr[j][i]){
                flag = 1;
                break;
            }
        }
    }
    if(flag==1)
        printf("No");
    else 
        printf("Yes");
    return 0;
}