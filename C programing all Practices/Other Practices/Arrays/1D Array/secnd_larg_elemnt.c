#include <stdio.h>
//Quite Hard Question
int main()
{
    int n, i, j;
    printf("\nEnter arrays length: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++){
        printf("Enter array no %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int max = arr[0],secondmax = arr[0];
    for (i = 0; i < n; i++){
        if (arr[i]> max){
            max=arr[i];
        }
    }  
    for (i = 0; i < n; i++){
        if (arr[i] != max && arr[i]>secondmax){
            secondmax=arr[i];
        }
    }    
/* Or,Using one loop:
    for (i = 0; i < n; i++){
        if (arr[i]> max){
            secondmax=max;
            max=arr[i];
        }
        else if (arr[i]>secondmax && arr[i] != max){
            secondmax=arr[i];
        }
    }  
*/
    printf("\nSecond max value is: %d",secondmax);
    return 0;
}