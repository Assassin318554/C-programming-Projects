#include <stdio.h>
int main(){
    int n;
    printf("\nEnter Array size: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        printf("Enter integer no %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        int flag=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j] && i != j){
                flag=1;
            }       
        }
        if(flag==0){
          printf("%d ",arr[i]);
        } 
    }
    return 0;
}