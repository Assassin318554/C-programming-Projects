#include <stdio.h>
int main()
{
    int n, i, x=1, j;
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
    }
    for (i = 0; i < n; i++){
        if (brr[i]!=arr[i]){
            x=0;
            break;
        }
    }

    if (x==1)
        printf("\nPalindrome");
    else if (x==0) 
        printf("\nNot Palindrome");
    
    return 0;
}