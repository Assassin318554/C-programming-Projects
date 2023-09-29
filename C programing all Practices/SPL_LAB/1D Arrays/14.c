#include <stdio.h>
int main(){
    int n, m;
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
    if(n>m){
        int temp[n];
        // Swaping: arr[n] to temp[n]
        for (int i = 0; i < n; i++)
            temp[i] = arr[i];
        // Swaping: brr[m] to arr[m]
        for (int i = 0; i < m; i++)
            arr[i] = brr[i];
        // Swaping: temp[n] to brr[n]
        for (int i = 0; i < n; i++)
            brr[i] = temp[i];
        //Printing A:
        printf("Array A: ");
        for (int i = 0; i < m; i++){
            printf("%d ", arr[i]);
        }    
        //Printing B:
        printf("\nArray B: ");
        for (int i = 0; i < n; i++){
            printf("%d ", brr[i]);
        }
    }
    else{
        int temp[m];
        // Swaping: arr[n] to temp[m]
        for (int i = 0; i < n; i++)
            temp[i] = arr[i];
        // Swaping: arr[n] to brr[m]
        for (int i = 0; i < m; i++)
            arr[i] = brr[i];
        // Swaping: temp[m] to arr[n]
        for (int i = 0; i < n; i++)
            brr[i] = temp[i];
        //Printing A:
        printf("Array A: ");
        for (int i = 0; i < m; i++){
            printf("%d ", arr[i]);
        }    
        // Printing B:
        printf("\nArray B: ");
        for (int i = 0; i < n; i++){
            printf("%d ", brr[i]);
        }
    }
    return 0;
}