#include <stdio.h>
int main()
{
    int n, i, x, j;
    printf("\nEnter Array size? : ");
    scanf("%d", &n);
    int arr[n];
    int brr[n];
    for (i = 0; i < n; i++){
        printf("Enter integer no %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++){
            brr[i]=arr[(n-1)-i];
            printf("%d ", brr[i]);
    }
    return 0;
}