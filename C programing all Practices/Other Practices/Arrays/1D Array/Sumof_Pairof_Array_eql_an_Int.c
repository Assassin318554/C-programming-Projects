#include <stdio.h>
//Tricky Question
int main()
{
    int n, i, x, j ,count=0;
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
            /*jokhon i=0 tokhon i+1 theke n-1 porjonto cheak korbe....'i' er man 1 hoile 0 tomo position er shathe sum kore dekhar
            dorkar nai...karon i=0 thaka kalin oi perticular sum  check hoye geche*/
            if (arr[i] + arr[j] == x){
                count++;
            }
        }
    }
    printf("\nNumber of pairs is/are: %d", count);
    

   
    return 0;
}