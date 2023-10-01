#include<stdio.h>
void reverse(int arr[],int n){
    int sum = 0;
    for (int i = n-1; i >= 0; i--){
        printf("%d ",arr[i]);
    }
    return;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);
    return 0;
}