#include <stdio.h>
int main(){
    int n, m, flag = 0;
    // Taking 1st array:
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    // Taking 2nd array:
    scanf("%d", &m);
    int brr[m];
    for (int i = 0; i < m; i++){
        scanf("%d", &brr[i]);
    }
    // Reducing commong elements:
    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i]==brr[j]){
                for(int k = i; k < n; k++){
                    arr[k]=arr[k+1];   
                } 
                n--;
                i--;
                break;
            }
        }
    }
    // Printing final array:
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }   
    return 0;
}