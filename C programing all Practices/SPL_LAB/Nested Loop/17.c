#include <stdio.h>
int main(){
    int n, k;
    scanf("%d", &n);
    int i = 1;
    while (i <= n){
        if (i < ((n + 1) / 2)){
            for (int j = 1; j <= n; j++){
                if (j == ((n + 1) / 2) - (i - 1) || j == ((n + 1) / 2) + (i - 1) || j == ((n + 1) / 2))
                    printf("$");
                else
                    printf("_");  
            }
            i++;
        }
        else if (i == ((n + 1) / 2)){
            for (int j = 1; j <= n; j++){
                    printf("$");
            }
            k = i;
            k--;
            i++;
        }
        else if (i > ((n + 1) / 2)){
            for (int j = 1; j <= n; j++){
                if (j == ((n + 1) / 2) - (k - 1) || j == ((n + 1) / 2) + (k - 1) || j == ((n + 1) / 2))
                    printf("$");
                else
                    printf("_");
            }
            k--;
            i++;
        }
        printf("\n");
    }
    return 0;
}