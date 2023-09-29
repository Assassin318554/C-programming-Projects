//6. Program in that count the frequency of each element of an array.
#include <stdio.h>
int main(){
    int n, count;
    printf("\nEnter array size: ");
    scanf("%d", &n);
    int arr[n], frr[n];
    for(int i=0; i<n; i++){
        printf("Enter array element no %d: ", i + 1);
        scanf("%d", &arr[i]);
        frr[i] = -1;
    }
    for(int i=0; i<n; i++){
        count = 1;
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
                frr[j] = 0;
            }
        }
            if(frr[i] != 0){
                frr[i] = count;
            }
    }
    printf("\nFrequency of all elements of array :\n");
    for(int i=0; i<n; i++){
        if(frr[i] != 0){
            printf("%d comes %d times.\n", arr[i], frr[i]);
        }
    }
    return 0;
}