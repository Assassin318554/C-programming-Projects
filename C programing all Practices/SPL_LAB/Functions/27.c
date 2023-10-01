#include<stdio.h>

int power(int a,int x){
    int result=1;
    for(int i=1;i<=x;i++){
        result = result * a;
    }
    return result;
}

void Get_Number_And_Base(int *N,int *B){
    int a,b;
    scanf("%d%d",&a,&b);
    *N = a;
    *B = b;
    return;
}

int Convert_Number(int N,int B){
    int x,last_digit,final=0,count=0;
    while(N>0){
        last_digit=N%B;
        x = power(10,count);
        final = last_digit * x + final;
        count++; 
        N=N/B; 
    }
    return final;
}

void Show_Converted_Number(int X){
    printf("%d",X);
    return;
}

int main(){
    int N,B;
    Get_Number_And_Base(&N,&B);
    if(B>=2 && B<=16){
        int X = Convert_Number(N,B);
        Show_Converted_Number(X);
    }
    else
        printf("Base not within proper range!");
    return 0;
}