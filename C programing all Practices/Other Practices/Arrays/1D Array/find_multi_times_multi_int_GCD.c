#include <stdio.h>
int min(int a, int b){
    if (a >= b) return a;
    else return b;
}
int GCD(int a, int b){
    int G;
    for (int i = min(a, b); i >= 1; i--){
        if (a % i == 0 && b % i == 0){
            G = i;
            break;
        }
    }
    return G;
}
int main() {
    int n,m,G,flag=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&m);
        int a[m];
        // Taking array element:
        for(int j=0;j<m;j++){
            scanf("%d",&a[j]);
        }
        // Finding GCD:
        for (int i = 0; i < m; i++) {
            for (int k = i + 1; k < m; k++) {
                if (GCD(a[i], a[k]) <= 2) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1) {
                break;
            }
        }
        if(flag == 1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}

