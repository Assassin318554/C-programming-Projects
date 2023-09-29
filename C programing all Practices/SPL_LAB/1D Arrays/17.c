#include <stdio.h>
// Bouble sort algorithm:
int main(){
    int n, length, flag = 1;
    scanf("%d", &n);
    length = n;
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    while(flag == 1){
        for(int i = 0; i < n - 1; i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        for(int i = 0; i < n - 1; i++){
            if(arr[i]>arr[i+1]){
                flag = 1;
                break;
            }
            else 
                flag = 0;
        }
        n--;
    }
    for(int i = 0; i < length; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}