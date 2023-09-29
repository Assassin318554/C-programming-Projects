#include <stdio.h>
int main()
{
    int n, i;
    printf("\nHow many integer do want to enter? : ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++){
        printf("Enter integer no %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++){
        if (i%2!=0){
            arr[i]=arr[i]*2;
            printf("%d ",arr[i]);
        }
        if (i%2==0){
            arr[i]=arr[i]+10;
            printf("%d ",arr[i]);
        }
    }
    return 0;
}