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
    for (int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i]==arr[j]){
                for(int k = j ; k < n; k++)
                    arr[k]=arr[k+1];    
                n--;
                j--;
            }
        }
    }
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i]==brr[j]){
                printf("%d ",arr[i]);
                flag=1;
                break;
            }
        }  
    }
    if(flag==0)
        printf("Empty set");
    
    return 0;
}