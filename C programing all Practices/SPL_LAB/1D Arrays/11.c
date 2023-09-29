#include <stdio.h>
int main(){
    int n, i, j;
    scanf("%d", &n);
    int arr[n],brr[n];
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Array A: ");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    for (i = 0; i < n; i++){
        brr[n-1-i]=arr[i];
    }
    printf("\nArray B: ");
    for (i = 0; i < n; i++){
        printf("%d ", brr[i]);
    }
    return 0;
}