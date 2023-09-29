#include<stdio.h>
#include<string.h>

int main(){
    typedef struct date{
        int day;
        int month;
        int year;
    }date;

    date a,b;
    
    a.day=26;
    a.month=3;
    a.year=2002;

    b.day=26;
    b.month=3;
    b.year=2002;
    
    int flag = 0;

    if(a.day!=b.day) flag = 1;
    if(a.month!=b.month) flag = 1;
    if(a.year!=b.year) flag = 1;

    if(flag==0)
        printf("Equal");
    else 
        printf("Not Equal");

    return 0;
}