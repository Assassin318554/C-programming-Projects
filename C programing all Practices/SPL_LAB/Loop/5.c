#include <stdio.h>
int main(){
    int x, y;
    scanf("%d%d", &x,&y);
    if(x > y){
        for(int i = x; i >= y; i--){
            if(i > y) 
                printf("%d,", i * i);
            else 
                printf("Reached!");
        }
    }
    if(x < y){
        for(int i = x; i <= y; i++){
            if(i < y) 
                printf("%d,", i * i);
        else 
            printf("Reached!");
        }
    }
    else 
        printf("Reached!");
    return 0;
}