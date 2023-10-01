#include<stdio.h>
void multiplies_by_2(int arr[],int n){
    int min = arr[0];
    for(int i=0;i<n;i++){
        arr[i] = arr[i] * 2;
    }
    return;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    multiplies_by_2(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}