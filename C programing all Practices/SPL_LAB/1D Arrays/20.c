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
    // Size of merged array: m+n
    int size = m+n;
    // Merging into 3rd array:
    int crr[size];
    for(int i=0;i<n;i++){
        crr[i]=arr[i];
    }
    int j = 0;
    for(int i=n;i<size;i++){
        while(j<m){
            crr[i]=brr[j];
            j++;
            break;
        }
    }
    // Merge complete.
    for (int i = 0; i < size - 1; i++){
        for(int j = i + 1; j < size; j++){
            if(crr[i]==crr[j]){
                for(int k = j ; k < size; k++)
                    crr[k]=crr[k+1];    
                size--;
                j--;
            }
        }
    }
    for(int i=0;i<size;i++){
        printf("%d ",crr[i]);
    }
    return 0;
}