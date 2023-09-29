//Duplicate elements
#include<stdio.h>
int main(){
    int n;
    printf("\nEnter Array size: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        printf("Enter array element no %d: ", i + 1);
        scanf("%d", &arr[i]);
    } 
    printf("Duplicate arrays are: \n");
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (arr[i]==arr[j]){
                printf("%d ",arr[i]);
            }
        }
    }
    return 0;
}