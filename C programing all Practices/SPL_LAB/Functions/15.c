#include<stdio.h>
int even_array_element(int arr[],int n){
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min)
            min = arr[i];
    }
    return min;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int minimum=even_array_element(arr,n);
    printf("%d",minimum);
    return 0;
}