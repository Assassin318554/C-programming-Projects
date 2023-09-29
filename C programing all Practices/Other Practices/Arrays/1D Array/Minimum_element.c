//2. program to find minimum element in array.
#include <stdio.h>
int main(){
    int n, i, j;
    printf("\nEnter array size: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++){
        printf("Enter array element no %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    for (i = 0; i < n; i++){
        if (arr[i] < min){
            min=arr[i];
        }
    }  
    printf("\nMinimum element is: %d",min);
    return 0;
}