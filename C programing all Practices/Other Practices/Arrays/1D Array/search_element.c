#include <stdio.h>
int main(){
    int n, x, flag = 0, idx = 0;
    int arr[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("\nEnter a value: ");
    scanf("%d",&x);
    for (int i = 0; i < 10; i++){
        if (arr[i]==x){
            flag=1;
            idx = i;
            break;
        }
    }
    if (flag==1){
            printf("\nYes, this value is present in this array");
            printf("\nThe Index of this value is= %d",idx);
        }
        else {
            printf("\nNo, this value is not present in this array");
        }
   
    return 0;
}