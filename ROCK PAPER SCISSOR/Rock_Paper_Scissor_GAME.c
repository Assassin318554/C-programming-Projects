#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h> //Header file for animation purposes

/*Animation Settings:*/
int SLEEPTIME = 25;
int EXIT = 50;

/*Function prototypes*/
void menuList();
void subMenuList();
void exit_from_code(char bye[]);
void print_invalid(char inv[]);
char computer_choice();
int rps(char you,char computer);

int main(){
    /*Start & End Text*/
    char start[] = "\n\t\t\tGAME is starting......\n\t\t\tLoading...............\n";
    char middle[] ="\t\t\tLoaded!\n";
    char inv[] = "\n\t\t>> Invalid input!!! Try again....\n";
    char bye[] = "\n\n>>> Exiting the Programme!!.........";
    /*Loading Screen Animation*/
    for(int i = 0; start[i] != '\0'; i++){
        printf("%c", start[i]);
        Sleep(50);
    }
    for(int i = 0; middle[i] != '\0'; i++){
        printf("%c", middle[i]);
        Sleep(25);
    }
    int exit=1;
    while(exit==1){
        // Menu:
        system("cls");
        menuList();
        int ch;
        printf(">> Enter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("\n");
                int subexit=1;
                while(subexit==1){
                    system("cls");
                    char you,computer;
                    // Submenu:
                    subMenuList();
                    printf("\t> Choose One: ");
                    fflush(stdin);
                    scanf("%c",&you);
                    fflush(stdin);
                    computer = computer_choice();
                    // Finding Result based on user's and Computer's choice.
                    int result = rps(you,computer);
                    switch(result){
                        case 0:
                            Sleep(SLEEPTIME);
                            printf("\n\t\t---------------------------------------");
                            Sleep(SLEEPTIME);
                            printf("\n\t\t You choose '%c' and computer choose '%c'.",you,computer);
                            Sleep(SLEEPTIME);
                            printf("\n\t\t -> Game Draw!  (^_^;)");
                            Sleep(SLEEPTIME);
                            printf("\n\t\t---------------------------------------\n\n");
                            /*Return Menu or Continue*/
                            int n1;
                            Sleep(SLEEPTIME);
                            printf("  \t\t1. Exit\n\t\t2. Play Again\n\t\t3. Go to Main Menu\n\n");
                            Sleep(SLEEPTIME);
                            printf("  \t\t-> ");
                            scanf("%d", &n1);
                            if (n1 == 1){
                                exit_from_code(bye);
                                return 0;
                            }
                            else if (n1 == 2){
                                break;
                            }
                            else if (n1 == 3){
                                subexit=0;
                            }
                            else {
                                print_invalid(inv);
                                break;
                            }
                        break;
                        case 1:
                            Sleep(SLEEPTIME);
                            printf("\n\t\t---------------------------------------");
                            Sleep(SLEEPTIME);
                            printf("\n\t\t You choose '%c' and computer choose '%c'.",you,computer);
                            Sleep(SLEEPTIME);
                            printf("\n\t\t -> Congratulations, You Win!  :)");
                            Sleep(SLEEPTIME);
                            printf("\n\t\t---------------------------------------\n\n");
                            /*Return Menu or Continue*/
                            int n2;
                            Sleep(SLEEPTIME);
                            printf("  \t\t1. Exit\n\t\t2. Play Again\n\t\t3. Go to Main Menu\n\n");
                            Sleep(SLEEPTIME);
                            printf("  \t\t-> ");
                            scanf("%d", &n2);
                            if (n2 == 1){
                                exit_from_code(bye);
                                return 0;
                            }
                            else if (n2 == 2){
                                break;
                            }
                            else if (n2 == 3){
                                subexit=0;
                            }
                            else {
                                print_invalid(inv);
                                break;
                            }
                        break;
                        case -1:
                            Sleep(SLEEPTIME);
                            printf("\n\t\t---------------------------------------");
                            Sleep(SLEEPTIME);
                            printf("\n\t\t You choose '%c' and computer choose '%c'.",you,computer);
                            Sleep(SLEEPTIME);
                            printf("\n\t\t -> Sorry, You Lose!  :(");
                            Sleep(SLEEPTIME);
                            printf("\n\t\t---------------------------------------\n\n");
                            /*Return Menu or Continue*/
                            int n3;
                            Sleep(SLEEPTIME);
                            printf("  \t\t1. Exit\n\t\t2. Play Again\n\t\t3. Go to Main Menu\n\n");
                            Sleep(SLEEPTIME);
                            printf("  \t\t-> ");
                            scanf("%d", &n3);
                            if (n3 == 1){
                                exit_from_code(bye);
                                return 0;
                            }
                            else if (n3 == 2){
                                break;
                            }
                            else if (n3 == 3){
                                subexit=0;
                            }
                            else {
                                print_invalid(inv);
                                break;
                            }
                        break;
                        case 2:
                            Sleep(SLEEPTIME);
                            printf("\n\t\t-----------------------------------");
                            Sleep(SLEEPTIME);
                            printf("\n\t\t Try with valid charecters!  (-_-)");
                            Sleep(SLEEPTIME);
                            printf("\n\t\t-----------------------------------\n\n");
                            /*Return Menu or Continue*/
                            int n4;
                            Sleep(SLEEPTIME);
                            printf("  \t\t1. Exit\n\t\t2. Play Again\n\t\t3. Go to Main Menu\n\n");
                            Sleep(SLEEPTIME);
                            printf("  \t\t-> ");
                            scanf("%d", &n4);
                            if (n4 == 1){
                                exit_from_code(bye);
                                return 0;
                            }
                            else if (n4 == 2){
                                break;
                            }
                            else if (n4 == 3){
                                subexit=0;
                            }
                            else {
                                print_invalid(inv);
                                break;
                            }
                        break;
                    }
                }
            break;
            case 2:
                exit_from_code(bye);
                exit=0;
                break;
            default: 
                print_invalid(inv);
            break;
        }
    }
    return 0;
}




void menuList(){    
    Sleep(SLEEPTIME);
    printf("\n _________________________________________________________________\n");
    Sleep(SLEEPTIME);
    printf("|                                                                 |\n");
    Sleep(500);
    printf("|             ");
    Sleep(500);
    printf("ROCK");
    Sleep(500);
    printf("           PAPER           ");
    Sleep(500);
    printf("SCISSOR");
    Sleep(500);
    printf("              |\n");
    Sleep(500);
    printf("|                                                                 |\n");
    Sleep(SLEEPTIME);
    printf("|                      >> Main Menu <<                            |\n");
    Sleep(SLEEPTIME);
    printf("|                                                                 |\n");
    Sleep(SLEEPTIME);
    printf("|  1. Play the game(with Computer)                                |\n");
    Sleep(SLEEPTIME);
    printf("|  2. Exit/Quit                                                   |\n");
    Sleep(SLEEPTIME);
    printf("|                                                                 |\n");
    Sleep(SLEEPTIME);
    printf("|_________________________________________________________________|\n\n");
}

void subMenuList(){    
    Sleep(SLEEPTIME);
    printf("\n\t __________________________________________\n");
    Sleep(SLEEPTIME);
    printf("\t|                                          |\n");
    Sleep(SLEEPTIME);
    printf("\t|  Computer has chosen one, Now your turn  |\n");
    Sleep(SLEEPTIME);
    printf("\t|                                          |\n");
    Sleep(SLEEPTIME);
    printf("\t|         Choose 'r' for Rock              |\n");
    Sleep(SLEEPTIME);
    printf("\t|         Choose 'p' for Paper             |\n");
    Sleep(SLEEPTIME);
    printf("\t|         Choose 's' for Scissor           |\n");
    Sleep(SLEEPTIME);
    printf("\t|                                          |\n");
    Sleep(SLEEPTIME);
    printf("\t|__________________________________________|\n\n");

}

void exit_from_code(char bye[]){
    for(int i = 0; bye[i] != '\0'; i++){
        printf("%c", bye[i]);
        Sleep(25);
    }
    Sleep(500);
}

void print_invalid(char inv[]){
    for(int i = 0;  inv[i] != '\0'; i++){
        printf("%c", inv[i]);
        Sleep(25);
    }
    Sleep(2000);
}
// Generating Computer Choise:
char computer_choice(){
    srand(time(0));
    int number = rand() % 100 + 1;
    char computer;
    if(33<=number) {
            computer = 'r';
    }
    else if(33<number && 66<=number){
        computer = 'p';
    }
    else{
        computer = 's';
    }
    return computer;
}

// Main Result:
int rps(char you,char computer){
    if(you==computer) return 0;
    
    if(you=='p' && computer=='r') return 1;
    else if(you=='r' && computer=='p') return -1;

    if(you=='s' && computer=='p') return 1;
    else if(you=='p' && computer=='s') return -1;

    if(you=='r' && computer=='s') return 1;
    else if(you=='s' && computer=='r') return -1;
    
    else return 2;
}