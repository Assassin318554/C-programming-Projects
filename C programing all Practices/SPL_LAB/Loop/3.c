#include <stdio.h>
int main(){
    int n,a=1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        if(i % 2 == 0){
            if(i < n) 
                printf("0,");
            else if( i== n) 
                printf("0");
        }
        else if(i % 2!= 0){
            if(i < n) 
                printf("1,");
            else if(i== n) 
                printf("1");
        }
    }
    return 0;
}