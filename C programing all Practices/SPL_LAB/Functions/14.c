#include<stdio.h>
void even_array_element(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]%2==0)
            printf("%d ",arr[i]);
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
    even_array_element(arr,n);
    return 0;
}