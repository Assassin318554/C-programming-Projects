#include <stdio.h>
int main()
{
    int n, i, j, sum1=0, sum2=0;
    int arr[10]={1,2,3,4,6,7,8,9,10};
        for (i = 0; i < 10; i++){
            sum1=sum1+arr[i];
        }
        for (j = 1; j <= 10; j++){
            sum2=sum2+j;
        }
        printf("\nSum2 is: %d", sum2);
        printf("\nSum1 is: %d", sum1);
        printf("\nMissing number is: %d", sum2-sum1);
     

    
   
    return 0;
}