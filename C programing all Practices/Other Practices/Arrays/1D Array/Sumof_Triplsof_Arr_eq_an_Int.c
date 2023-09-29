#include <stdio.h>
//Tricky Question
int main()
{
    int n, i, x, j, k ,count=0;
    printf("\nEnter an integer: ");
    scanf("%d",&x);
    printf("\nHow many integer do want to enter? : ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++){
        printf("Enter integer no %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){ 
            for (k = j + 1; k < n; k++){
                if (arr[i] + arr[j] + arr[k] == x) {
                count++;
                }
            }
        }
    }
    printf("\nNumber of triplets are: %d", count);
    

   
    return 0;
}