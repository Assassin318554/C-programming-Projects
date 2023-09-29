#include<stdio.h>
int powerlog(int a,int b){
    if(b==0) return 1;
    if(b==1) return a;
    int x = powerlog(a,b/2);
    int recAns;
    if(b%2==0)
        recAns = x * x;
    else
        recAns = x * x * a;

    return recAns;
}
int main(){
    int a,b;
    printf("\n'Enter a & b to find a to the power b'\n");
    printf("Enter a and b: ");
    scanf("%d%d",&a,&b);
    int p = powerlog(a,b);
    printf("%d",p);
    return 0;
}