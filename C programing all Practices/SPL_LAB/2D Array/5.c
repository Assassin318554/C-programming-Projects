#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==i)
                printf("1 ");
            else 
                printf("0 ");
        }
        printf("\n");
    }
    return 0;
}