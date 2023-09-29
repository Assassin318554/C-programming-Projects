#include <stdio.h>
//Bohut Hard
void reverse(int arr[], int si, int en){  //reversing part of an array
    for (int i = si, j = en; i < j; i++, j--){
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }
    return;
}
int main()
{
    int n, i, k, j;
    printf("\nHow many times you want to rotate the array: ");
    scanf("%d", &k);
    printf("\nArray length: ");
    scanf("%d", &n);
    if (k>n){
        k=k%n;
    }
    int arr[n];
    for (i = 0; i < n; i++){
        printf("Enter integer no %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
        printf("\n");
        reverse(arr, 0, n-1);
        reverse(arr, 0, k-1);
        reverse(arr, k, n-1);

    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}