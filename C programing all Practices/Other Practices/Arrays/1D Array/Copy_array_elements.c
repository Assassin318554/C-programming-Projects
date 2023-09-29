//7.Copy array elements to another.
#include <stdio.h>
int main(){
    int n, i, j;
    printf("\nEnter Array size: ");
    scanf("%d", &n);
    int arr[n],brr[n];
    for (i = 0; i < n; i++){
        printf("Enter array element no %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Copied array is: ");
    for (i = 0; i < n; i++){
            brr[i]=arr[i];
            printf("%d ", brr[i]);
    }
    return 0;
}