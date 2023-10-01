#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++){
            printf("%d", j);
        }
        for(int k=i+1; k<=n; k++){
            printf("_");
        }
        for(int l=n; l>=i+2; l--){
            printf("_");
        }
        for(int m=i; m>=1; m--){
            if(m!=n)
                printf("%d", m);
        }
        printf("\n");
    }
    return 0;
}