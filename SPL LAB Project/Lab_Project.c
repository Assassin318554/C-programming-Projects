#include<stdio.h>
#include<string.h>

typedef struct cricketer{
    char name[50];
    char role[50];
    int age;
    int matchs;
    int runs;
    int highest_Run;
    float average;
    float value;
}cricketer;

int main(){
    int file_input=1;
    while(file_input==1) {
        char filename[20];
        printf("\n> Enter file name with (.txt): ");
        fflush(stdin);
        scanf("%[^\n]s",&filename);
        FILE *fptr;
        fptr = fopen(filename,"r");
        if(fptr==NULL){
            printf("\n:( File name not found!!!  Try with proper name and proper extension.\n\n");
            continue;
        }
        else {
            int n;
            fscanf(fptr,"%d",&n);
            cricketer arr[1000];
            for(int i=0; i<n; i++) {
                fscanf(fptr," %[^\n]s",&arr[i].name); 
                fscanf(fptr,"%d",&arr[i].age); 
                fscanf(fptr," %[^\n]s",&arr[i].role); 
                fscanf(fptr,"%d",&arr[i].matchs);
                fscanf(fptr,"%d",&arr[i].runs);
                fscanf(fptr,"%d",&arr[i].highest_Run);
                arr[i].value =  (arr[i].age + arr[i].matchs + arr[i].runs + arr[i].highest_Run 
                                + (arr[i].runs/(float)arr[i].matchs) + (arr[i].highest_Run/(float)arr[i].age) 
                                + ((strcmp("Allrounder",arr[i].role) == 0) ? 50 : 0));
            }
            fclose(fptr);       
            int Exit=1;
            while(Exit == 1) {
                printf(" _________________________________________________________________\n");
                printf("|                                                                 |\n");
                printf("|  1. Show All Players                                            |\n");
                printf("|  2. Show A Particular player information (Provide Player Name)  |\n");
                printf("|  3. Show the MOST Experienced Player (MEP)                      |\n");
                printf("|  4. Show the New Commer Player (NCP)                            |\n");
                printf("|  5. Show the Top Scorer Player (TSP)                            |\n");
                printf("|  6. Show the Hard Hitter Player (HHP)                           |\n");
                printf("|  7. Show the Highest Run Taker Player (HRTP)                    |\n");
                printf("|  8. Show the MOST Valuable Player (MVP)                         |\n");
                printf("|  9. Show the Allrounders                                        |\n");
                printf("|  10. Exit/Quit                                                  |\n");
                printf("|_________________________________________________________________|\n\n");
                int ch;
                printf("Enter your choice: ");
                scanf("%d",&ch);
                printf("\n\n");
                switch (ch) {
                    case 1:
                        printf("\n----------------------\n");
                        printf(" Players Information:");
                        printf("\n----------------------\n\n");
                        for (int i = 0; i < n; i++){
                            printf("Player %d:\n",i+1);
                            printf("Name: %s\n",arr[i].name);
                            printf("Age: %d\n",arr[i].age);
                            printf("Role: %s\n",arr[i].role);
                            printf("No of matches: %d\n",arr[i].matchs);
                            printf("Value: %.2f\n",arr[i].value);
                            printf("Total runs: %d\n",arr[i].runs);
                            printf("Highest run: %d\n\n\n",arr[i].highest_Run);
                            
                        }
                        break;

                    case 2:
                        printf("Provide player's name: ");
                        char find[100],main[100];
                        int flag=0;
                        scanf(" %[^\n]s", find);
                        printf("\n-----------------------\n");
                        printf(" Player's Information:");
                        printf("\n-----------------------\n\n");
                        for (int i = 0; i < n; i++){
                            strcpy(main,arr[i].name);
                            strlwr(find);
                            strlwr(main);
                            if(strstr(main,find)){
                                printf("Player's Name: %s\n",arr[i].name);
                                printf("Age: %d\n",arr[i].age);
                                printf("Role: %s\n",arr[i].role);
                                printf("No of matches: %d\n",arr[i].matchs);
                                printf("Total runs: %d\n",arr[i].runs);
                                printf("Value: %.2f\n",arr[i].value);
                                printf("Highest run: %d\n\n\n",arr[i].highest_Run);
                                flag=1;
                            }
                        }
                        if(flag==0){
                            printf("Player not found!\n\n\n");
                        }
                        break;

                    case 3: 
                        printf("\n------------------------------\n");
                        printf(" Most Experienced Player(MEP)");
                        printf("\n------------------------------\n\n");
                        int max_matchs = arr[0].matchs;
                        int index1=0;
                        for (int i = 0; i < n; i++){
                            if(arr[i].matchs >= max_matchs){
                                max_matchs = arr[i].matchs;
                                index1=i;
                            }
                        }
                        printf("Player's Name: %s.\n\n\n",arr[index1].name);
                        break;

                    case 4: 
                        printf("\n------------------------\n");
                        printf(" New Commer Player(NCP)");
                        printf("\n------------------------\n");
                        int lowest_age = arr[0].age;
                        int index2=0;
                        for (int i = 0; i < n; i++){
                            if(arr[i].age <= lowest_age){
                                lowest_age = arr[i].age;
                                index2=i;
                            }
                        }
                        printf("Player's Name: %s.\n\n\n",arr[index2].name);
                        break;

                    case 5:        
                        printf("\n------------------------\n");
                        printf(" Top Scorer Player(TSP)");
                        printf("\n------------------------\n");
                        int most_run=arr[0].runs;
                        int index3;
                        for (int i = 0; i < n; i++){
                            if(arr[i].runs >= most_run){
                                most_run = arr[i].runs;
                                index3=i;
                            }
                        }
                        printf("Player's Name: %s.\n\n\n",arr[index3].name);
                        break;

                    case 6:
                        printf("\n-----------------------------\n");
                        printf(" The Hard Hitter Player(HHP)");
                        printf("\n-----------------------------\n");            
                        float max_avg_run = arr[0].runs/(float)arr[0].matchs;
                        int index4=0;
                        for (int i = 0; i < n; i++){
                            float avg_run = arr[i].runs/(float)arr[i].matchs;
                            if(avg_run >= max_avg_run){
                                max_avg_run = avg_run;
                                index4=i;
                            }
                        }
                        printf("Player's Name: %s.\n\n\n",arr[index4].name);
                        break;

                    case 7:
                        printf("\n--------------------------------\n");
                        printf(" Highest Run Taker Player(HRTP)");
                        printf("\n--------------------------------\n");
                        int top_highest_run = arr[0].highest_Run;
                        int index5=0;
                        for (int i = 0; i < n; i++){
                            if(arr[i].highest_Run >= top_highest_run){
                                top_highest_run = arr[i].highest_Run;
                                index5=i;
                            }
                        }
                        printf("Player's Name: %s.\n\n\n",arr[index5].name);
                        break;

                    case 8:
                        printf("\n---------------------------\n");
                        printf(" MOST Valuable Player(MVP)");
                        printf("\n---------------------------\n");
                        int index6=0;
                        float MVP = arr[0].value;
                        for(int i = 0; i < n; i++){
                            if(arr[i].value >= MVP){
                                MVP = arr[0].value;
                                index6=i;
                            }
                        }
                        printf("Player's Name: %s.\n",arr[index6].name);
                        printf("Value: %.2f\n\n\n",arr[index6].value);
                        break;

                    case 9:
                        printf("\n-------------\n");
                        printf(" Allrounders");
                        printf("\n-------------\n");
                        int count=0,count2=0;
                        for (int i = 0; i < n; i++){
                            if(strcmp(arr[i].role,"Allrounder")==0){
                                count++;
                            }
                        }
                        printf("Player Name/s: ");
                        for (int i = 0; i < n; i++){    
                            if(strcmp(arr[i].role,"Allrounder")==0){
                                count2++;
                                if(count2<count){
                                    printf("%s, ",arr[i].name);
                                }
                                else if(count2==count){
                                    printf("%s.\n\n\n",arr[i].name);
                                    break;
                                }
                            }
                        }
                        break;
                    case 10:
                        Exit=0;
                        break;
                    default:
                        printf("\nInvalid Input!!! Try Again with 1 to 10\n\n\n");
                }
            }
        }
        file_input=0;
    }

    return 0;
}