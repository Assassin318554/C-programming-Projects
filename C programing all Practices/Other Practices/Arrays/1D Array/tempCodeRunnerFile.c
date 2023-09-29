#include <stdio.h>
void reverse(int arr[], int si, int en){  //reversing part of an array
    for (int i = si, j = en; i < j; i++, j--){
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }
    return;
}
int main(){
    int n, i, j, si, en;
    printf("\nEnter Array size? : ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++){
        printf("Enter integer no %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nEnter indices to reverse that part: ");
    scanf("%d%d", &si, &en);
    reverse(arr, si, en);
    // for (i = 0,j = n-1; i < j; i++,j--){
    // }
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}