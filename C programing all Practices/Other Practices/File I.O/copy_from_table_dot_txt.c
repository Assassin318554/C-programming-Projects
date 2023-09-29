#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("How many time you want to print from 'a.txt' to 'b.txt': ");
    scanf("%d",&n);
    FILE *fptr1,*fptr2;
    char ch;
    for(int i=1;i<=n;i++){
        // File Opening:
        fptr1 = fopen("a.txt","r");
        fptr2 = fopen("b.txt","a");

        // Number of times:
        if(i==1) fprintf(fptr2,"1st time:\n");
        else if(i==2) fprintf(fptr2,"\n\n2nd time:\n");
        else if(i==3) fprintf(fptr2,"\n\n3rd time:\n");
        else fprintf(fptr2,"\n\n%d'th time:\n",i);
        
        // Printing or Copying:
        ch = fgetc(fptr1);
        while(ch!=EOF){
            fprintf(fptr2,"%c",ch);
            ch=fgetc(fptr1);
        }

        // File Closing:
        fclose(fptr1);
        fclose(fptr2);
    }
    printf("Successfully Copied :)");
    return 0;
}