#include <stdio.h>
int main(){
    int n, indmax, indmin;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int max = arr[0], min = arr[0];
    for (int i = 0; i < n; i++){
        if(arr[i]>=max){
            max = arr[i];
            indmax = i;
        }
        if(arr[i]<=min){
            min = arr[i];
            indmin = i;
        }
    }
    printf("Max: %d, Index: %d\n", max, indmax);
    printf("Min: %d, Index: %d", min, indmin);
    return 0;
}