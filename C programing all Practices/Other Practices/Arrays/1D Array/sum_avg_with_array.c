#include<stdio.h>
int main(){
    int n,sum=0;
    printf("\nHow many integer you want to add? : ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++){
        printf("\nEnter integer no %d: ",i+1);
        scanf("%d",&arr[i]);
        sum= sum+arr[i];
    }
    printf("\nAverage is: %d",sum/n);
    
    return 0;
}