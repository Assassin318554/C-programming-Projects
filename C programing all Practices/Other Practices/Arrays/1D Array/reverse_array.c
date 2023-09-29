#include <stdio.h>
int main()
{
    int n, i, j;
    printf("\nEnter Array size? : ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++){
        printf("Enter integer no %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0, j = (n - 1); i <= n - 1, j >= 0; i++, j--){
        printf("%d ", arr[j]);
    }
    return 0;
}