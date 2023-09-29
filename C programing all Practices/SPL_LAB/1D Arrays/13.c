#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int position;
    printf("position: ");
    scanf("%d",&position);
    for(int i = position;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}