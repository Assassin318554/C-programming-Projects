#include <stdio.h>
int main()
{
    int n, i,sum1=0,sum2=0;
    printf("\nHow many integer do want to enter? : ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++){
        printf("Enter integer no %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++){
        if (i % 2 != 0){
            sum1 += arr[i];
        }
        else if (i % 2 == 0){
            sum2 += arr[i];
        }
    }

    if (sum1 > sum2)
        printf("\nDifference between sum of odd and sum of even arrays is : %d",sum1-sum2);
    else if (sum1 < sum2)
        printf("\nDifference between sum of even and sum of odd arrays is: %d",sum2-sum1);
    else 
        printf("\nDifference is: 0");    
    return 0;
}