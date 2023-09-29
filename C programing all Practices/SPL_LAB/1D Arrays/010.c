#include <stdio.h>
// arektu easy soution khujte hobe
int main(){
    int n, x, count = 0,flag = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d",&x);
    for (int i = 0; i < n; i++){
        if (arr[i]==x){
            if(count==0){
                printf("FOUND at index position: ");
                printf("%d", i);
                count++;
            }
            else if(count>0)
                printf(", %d", i);
            flag = 1;
        }
    }
    if(flag == 0) 
        printf("NOT FOUND");
    return 0;
}