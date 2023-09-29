#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int number,position;
    scanf("%d%d",&number,&position);
    for(int j = n;j>position;j--){
        arr[j]=arr[j-1];
    }
    arr[position]=number;
    for(int i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}