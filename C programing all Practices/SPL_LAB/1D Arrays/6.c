#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n], brr[n], crr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++){
        scanf("%d", &brr[i]);
    }
    for (int i = 0; i < n; i++){
        crr[i] = arr[i] + brr[i];
    }
    for (int i = 0; i < n; i++){
        printf("%d ", crr[i]);
    }
    return 0;
}