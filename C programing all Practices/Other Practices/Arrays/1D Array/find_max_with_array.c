#include<stdio.h>
int main(){
    int n,i;
    printf("\nIn how many integer do want to get maximal  : ");
    scanf("%d",&n);
    int arr[n];
    for (i = 0; i < n; i++){
        printf("Enter integer no %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for (i = 0; i < n; i++){
        if (max < arr[i]){
            max=arr[i];
        }
    }
    printf("\nMaximum is: %d",max);
    return 0;
}