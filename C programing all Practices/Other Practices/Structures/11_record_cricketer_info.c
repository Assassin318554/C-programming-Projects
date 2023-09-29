#include<stdio.h>
#include<string.h>

int main(){

    typedef struct cricketer{
        char firstname[15];
        char lastname[15];
        int age;
        int test_matches;
        float avg_run;
    }cricketer;
    
    printf("\n");
    cricketer arr[3];
  
    for(int i=0;i<3;i++){
        printf("Enter cricketer first name: ");
        scanf("%s",arr[i].firstname); 
        printf("Enter cricketer last name: ");
        scanf("%s",arr[i].lastname);
        printf("Enter Age: "); 
        scanf("%d",&arr[i].age);
        printf("Enter Test Matches: ");
        scanf("%d",&arr[i].test_matches);
        printf("Enter Average Run: ");
        scanf("%f",&arr[i].avg_run);
        printf("\n");
    }

    printf("\n\n");

    for(int i=0;i<3;i++){
        printf("\n%d.\n",i+1);
        printf("Cricketers' name is = %s %s, ",arr[i].firstname,arr[i].lastname);
        printf("%s's age is = %d, ",arr[i].firstname,arr[i].age);
        printf("%s's test matches is = %d, ",arr[i].firstname,arr[i].test_matches);
        printf("%s's average run is = %.2f, ",arr[i].firstname,arr[i].avg_run);
        printf("\n");
    }

    return 0;
}