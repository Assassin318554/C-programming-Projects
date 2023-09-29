#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    int recAns = a*power(a,b-1);
    return recAns;
}
int main(){
    int a,b;
    printf("\n'Enter a & b to find a to the power b'\n");
    printf("Enter a and b: ");
    scanf("%d%d",&a,&b);
    int p = power(a,b);
    printf("%d",p);
    return 0;
}