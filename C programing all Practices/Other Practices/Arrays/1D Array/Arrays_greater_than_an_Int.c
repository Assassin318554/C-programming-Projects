#include <stdio.h>
int main()
{
    int n, x, i, count=0;
    printf("\nEnter an integer to compare with arrays: ");
    scanf("%d", &x);
    printf("\nHow many integer do want to enter in array? : ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++){
        printf("Enter integer no %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nArrays are greater than %d are: ",x);
    for (i = 0; i < n; i++){
        if (arr[i] > x){
            count++;
            printf("%d ",arr[i]);
        }
    }
    printf("\n%d arrays are greater than %d.",count,x);
    return 0;
}