#include <stdio.h>
int main(){
    int n, sum = 0;
    scanf("%d", &n);
    int arr[n][n];
    if (n%2!=0){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                scanf("%d", &arr[i][j]);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i%2!=0)
                    sum += arr[i][j];
                else{
                    if(j%2!=0)
                        sum += arr[i][j];
                }
            }
        }
    }   
    printf("%d",sum); 
    return 0;
}