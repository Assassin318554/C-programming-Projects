#include<stdio.h>
int main(){
    int n;
    float a, att, ass, ct, mid, final;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        scanf("%f%f%f%f%f", &att, &ass, &ct, &mid, &final);
        if(att>=0 && att<=5 && ass>=0 && ass<=10 && ct>=0 && ct<=15 && mid>=0 && mid<=50 && final>=0 && final<=100){
            a = att + ass + ct + mid * 0.6 + final * 0.4;
            printf("Student %d: ",i);
            if(a>=90 && a<=100) printf("A\n");
            else if(a>=86) printf("A-\n");
            else if(a>=82) printf("B+\n");
            else if(a>=78) printf("B\n");
            else if(a>=74) printf("B-\n");
            else if(a>=70) printf("C+\n");
            else if(a>=66) printf("C\n");
            else if(a>=62) printf("C-\n");
            else if(a>=58) printf("D+\n");
            else if(a>=55) printf("D\n");
            else if(a<55 && a>=0) printf("F\n");
        }
        else printf("Invalid Mark/s Input");
    }
    return 0;
}
