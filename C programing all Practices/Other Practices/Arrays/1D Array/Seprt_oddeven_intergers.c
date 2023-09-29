//10. Seperate odd and even intergers in seperate arrays.
#include <stdio.h>
int main(){
    int n, i, o = 0, e = 0;
    printf("\nEnter array size : ");
    scanf("%d", &n);
    int arr[n], odd[n], even[n];
    for (i = 0; i < n; i++){
        printf("Enter array element no %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++){
        if (arr[i] % 2 != 0){
            odd[o] = arr[i];
            o++;
        }
        else if (arr[i] % 2 == 0){
            even[e] = arr[i];
            e++;
        }
    }
    printf("\nArray with odd elements: ");
    for (int j = 0; j < o; j++){
        printf("%d ",odd[j]);
    }
    printf("\nArray with even elements: ");
    for (int j = 0; j < e; j++){
        printf("%d ",even[j]);
    }
    return 0;
}