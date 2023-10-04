#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
using namespace std;
using namespace std::chrono;

/* Animation Settings: */
int SLEEPTIME = 25;
int EXIT = 50;

/* Function Prototypes */
void printArray(int *arr, int n);
double selection_sort(int *arr, int n, int order);
double intsertion_Sort(int *arr, int n, int order);
double bubble_sort(int *arr, int n, int order);
void MenuList1();
void MenuList2();
void subMenuList1();
void subMenuList2();
void printString(string str);


int main(){
    system("cls");

    /* Loading Screen Animation */
    printString("\n\t\t\tScrean is starting......\n\t\t\tLoading...............\n");
    printString("\t\t\tLoaded!\n");




    /* Part 1 -> Input */
    system("cls");
    int choice;
    ofstream fout;
    MenuList1();
    printString(">> Enter your choice: ");
    cin >> choice;
    int arraySize;   
    printString("\n>> Enter the length of the array you want to create? : ");
    cin >> arraySize;
    int *arr = new int[arraySize];
    if(choice == 1){
        /* Taking input from the console */
        for(int i = 0; i < arraySize; i++){
            int a;
            if (cin.fail()) {
                printString("\n>> Invalid input found in the file........Please keep numerical values in the file as input and try again..........\n");
                    goto last;
            }
            cin >> a;
            arr[i] = a;

        }
    }
    else if(choice == 2){
        /* Random number generating and taking input in the array */
        srand(time(NULL));
        for (int i = 0; i < arraySize; i++){
            arr[i] = (rand() % 100) + 1;
        }
    }
    else if(choice == 3){
        /* Reading data from file insert to the array and sorting them */
        string filename;
        printString("\n> Enter file name with (.txt): ");
        cin >> filename;
        ifstream fin("input.txt");
        if(!fin){
            cout << "\n:(File name not found!!!  Try with proper name and extension.\n\n";
            return 0;
        }
        else{
            int index = 0;
            while(!fin.eof()){
                int a;
                if (fin.fail()) {
                    printString("\n>> Invalid input found in the file........Please keep numerical values in the file as input and try again..........\n");
                    goto last;
                }
                fin >> a;
                arr[index] = a;
                index++;
                arraySize = index;
            }
        }   
    }




    /* Part 2 -> Sorting */
    system("cls");
    MenuList2();
    int ch,order;
    double execution_time;
    printString(">> Enter your choice: ");
    cin >> ch;
    subMenuList1();
    printString(">> Choose the order: ");
    cin >> order;
    printString("\n\n>> Execution time of your chosen sorting: ");
    switch(ch){
        case 1:
            execution_time = bubble_sort(arr,arraySize,order);
            cout << execution_time << " ms" << endl;
            Sleep(3000);
            break;
        case 2:
            execution_time = selection_sort(arr,arraySize,order);
            cout << execution_time << " ms" << endl;
            Sleep(3000);
            break;
        case 3:
            execution_time = intsertion_Sort(arr,arraySize,order);
            cout << execution_time << " ms" << endl;
            Sleep(3000);
            break;
        default: cout << "\n>>> Enter valid choice. <<<\n";
            break;
    }




    /* Part 3 -> Saving and Printing */
    system("cls");
    subMenuList2();
    int c;
    printString("\t>> Enter your choice: ");
    cin >> c;
    switch (c){
        case 1:
            fout.open("output.txt");
            for (int i = 0; i < arraySize; i++){
                fout << arr[i] << " ";
            }
            fout.close();
            cout << endl << endl;
            printString("** Array saved to the file...  Printing array elements: ");
            printArray(arr,arraySize);
            break;
        case 2:
            printString("** Printing array elements: ");
            printArray(arr,arraySize);
            break;
        case 3:
            goto last;
            break;
        default: 
            break;
    }




    /* Part 4 -> Final part */

    last: 
    delete arr;
    printString("\n>> Exiting the Programme...........     Assalamu Alaikum.........\n\n");
    getch();
}






// All the functions

void printArray(int *arr, int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
        Sleep(25);
    }
    cout << endl;
    Sleep(500);
}

double selection_sort(int *arr, int n, int order) {
    if(order == 1){
        // Record the start time
        high_resolution_clock::time_point start_time = high_resolution_clock::now();
        for (int i = 0; i < n - 1; i++) {
            int mini = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[mini]) {
                    mini = j;
                }
            }
            int temp = arr[mini];
            arr[mini] = arr[i];
            arr[i] = temp;
        }
        // Record the end time
        high_resolution_clock::time_point end_time = high_resolution_clock::now();
        double exetime = duration_cast<milliseconds>(end_time - start_time).count();
        return exetime;
    }
    else if(order == 2){
        high_resolution_clock::time_point start_time = high_resolution_clock::now();
        for (int i = 0; i < n - 1; i++) {
            int mini = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] > arr[mini]) {
                    mini = j;
                }
            }
            int temp = arr[mini];
            arr[mini] = arr[i];
            arr[i] = temp;
        }
        // Record the end time
        high_resolution_clock::time_point end_time = high_resolution_clock::now();
        double exetime = duration_cast<milliseconds>(end_time - start_time).count();
        return exetime;
    }
    else{
        cout << "Enter valid choice......";
        return -1.0;
    }
}

double intsertion_Sort(int *arr, int n, int order){
    if(order == 1){
        // Record the start time
        high_resolution_clock::time_point start_time = high_resolution_clock::now();
        for (int i = 1; i < n; i++){
            int key = arr[i];
            int j = i - 1;
            while(j >= 0 && arr[j] > key){
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
        // Record the end time
        high_resolution_clock::time_point end_time = high_resolution_clock::now();
        double exetime = duration_cast<milliseconds>(end_time - start_time).count();
        return exetime;
    }
    else if(order == 2){
        high_resolution_clock::time_point start_time = high_resolution_clock::now();
        for (int i = 1; i < n; i++){
            int key = arr[i];
            int j = i - 1;
            while(j >= 0 && arr[j] < key){
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
        // Record the end time
        high_resolution_clock::time_point end_time = high_resolution_clock::now();
        double exetime = duration_cast<milliseconds>(end_time - start_time).count();
        return exetime;
    }
    else{
        cout << "Enter valid choice......";
        return -1.0;
    }
}

double bubble_sort(int *arr, int n, int order){
    if(order == 1){
        // Record the start time
        high_resolution_clock::time_point start_time = high_resolution_clock::now();
        for (int i = 0; i < n - 1; i++){
        int didSwap = 0;
        for (int j = 0; j < n - 1 - i; j++){
                if(arr[j] > arr[j + 1]){
                    int temp = arr[j + 1];
                    arr[j + 1] = arr[j];
                    arr[j] = temp;
                    didSwap = 1;
                }
            }
            if (didSwap == 0) {
                break;
            }
        } 
        // Record the end time
        high_resolution_clock::time_point end_time = high_resolution_clock::now();
        double exetime = duration_cast<milliseconds>(end_time - start_time).count();
        return exetime;
    }
    else if(order == 2){
        high_resolution_clock::time_point start_time = high_resolution_clock::now();
        for (int i = 0; i < n - 1; i++){
        int didSwap = 0;
        for (int j = 0; j < n - 1 - i; j++){
                if(arr[j] < arr[j + 1]){
                    int temp = arr[j + 1];
                    arr[j + 1] = arr[j];
                    arr[j] = temp;
                    didSwap = 1;
                }
            }
            if (didSwap == 0) {
                break;
            }
        } 
        // Record the end time
        high_resolution_clock::time_point end_time = high_resolution_clock::now();
        double exetime = duration_cast<milliseconds>(end_time - start_time).count();
        return exetime;
    }
    else{
        cout << "Enter valid choice.....";
        return -1.0;
    }
}

void MenuList1(){    
    Sleep(SLEEPTIME);
    cout << "\n ___________________________________________\n";
    Sleep(SLEEPTIME);
    cout << "|                                           |\n";
    Sleep(SLEEPTIME);
    cout << "|             >> Main Menu <<               |\n";
    Sleep(SLEEPTIME);
    cout << "|                                           |\n";
    Sleep(SLEEPTIME);
    cout << "|       How do you want to take data?       |\n";
    Sleep(SLEEPTIME);
    cout << "|                                           |\n";
    Sleep(SLEEPTIME);
    cout << "|         1. Input from console             |\n";
    Sleep(SLEEPTIME);
    cout << "|         2. Generating random number       |\n";
    Sleep(SLEEPTIME);
    cout << "|         3. Input from a file              |\n";
    Sleep(SLEEPTIME);
    cout << "|                                           |\n";
    Sleep(SLEEPTIME);
    cout << "|___________________________________________|\n\n";
}

void MenuList2(){    
    Sleep(SLEEPTIME);
    cout << "\n ___________________________________________\n";
    Sleep(SLEEPTIME);
    cout << "|                                           |\n";
    Sleep(SLEEPTIME);
    cout << "|         Which sort you want to do?        |\n";
    Sleep(SLEEPTIME);
    cout << "|                                           |\n";
    Sleep(SLEEPTIME);
    cout << "|      1. Bubble Sort                       |\n";
    Sleep(SLEEPTIME);
    cout << "|      2. Selection Sort                    |\n";
    Sleep(SLEEPTIME);
    cout << "|      3. Insertion Sort                    |\n";
    Sleep(SLEEPTIME);
    cout << "|                                           |\n";
    Sleep(SLEEPTIME);
    cout << "|___________________________________________|\n\n";
}

void subMenuList1(){    
    Sleep(SLEEPTIME);
    cout << "\n\t __________________________________________\n";
    Sleep(SLEEPTIME);
    cout << "\t|                                          |\n";
    Sleep(SLEEPTIME);
    cout << "\t|    How do you want to sort the array?    |\n"; 
    Sleep(SLEEPTIME);
    cout << "\t|                                          |\n";
    Sleep(SLEEPTIME);
    cout << "\t|        Choose '1' for Ascending          |\n";
    Sleep(SLEEPTIME);
    cout << "\t|        Choose '2' for Descending         |\n";
    Sleep(SLEEPTIME);
    cout << "\t|                                          |\n";
    Sleep(SLEEPTIME);
    cout << "\t|__________________________________________|\n\n";
}

void subMenuList2(){    
    Sleep(SLEEPTIME);
    cout << "\n\t __________________________________________\n";
    Sleep(SLEEPTIME);
    cout << "\t|                                          |\n";
    Sleep(SLEEPTIME);
    cout << "\t|  Save the array or Only print the array  |\n"; 
    Sleep(SLEEPTIME);
    cout << "\t|                                          |\n";
    Sleep(SLEEPTIME);
    cout << "\t|        Choose '1' for Saving             |\n";
    Sleep(SLEEPTIME);
    cout << "\t|        Choose '2' for Printing           |\n";
    Sleep(SLEEPTIME);
    cout << "\t|        Choose '3' for exit               |\n";
    Sleep(SLEEPTIME);
    cout << "\t|                                          |\n";
    Sleep(SLEEPTIME);
    cout << "\t|__________________________________________|\n\n";
}

void printString(string str){
    for(int i = 0; i < str.size(); i++){
        cout << str[i];
        Sleep(25);
    }
    Sleep(500);
}