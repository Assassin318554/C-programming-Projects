#include <stdio.h>
int main(){
    int n, i, j;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++){
        if(arr[i] % 3 == 0)
            arr[i] = -1;
    }
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}