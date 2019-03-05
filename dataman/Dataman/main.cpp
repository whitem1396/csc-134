// M4LAB DATAMAN PROJECT
// CSC 134
// 02/21/2019
// Matthew White

#include <iostream>
#include "Arithmetic.h"

using namespace std;

void testAdd();
void main_menu();
void print_main_menu();
void tempConvertMenu();

int main_arithmetic();



int main_arithmetic()
{



    int choice;
    // main calc loop
    // ADDITION CODE -----------------
do
    {

        // branch on user input
        cout << "Addition-1" << endl;
        cout << "Subtraction-2" << endl;
        cout << "Multiplication-3" << endl;
        cout << "Division-4" << endl;
        cout << "Options(1,2,3,4,0): ";
        cin >> choice;
    switch(choice)
        {
    case 1:
    int num1, num2;
    char opcode;
    cout << "\nThis is the addition practice" << endl;
    cout << "\n Enter an expression (for instance 3+3)" << endl;
    cin >> num1 >> opcode >> num2;
    cout <<"You entered: " << num1 << " " << opcode << " " << num2 << endl;
    if (opcode == '+')
        {
            cout << "Sum equals " << add(num1,num2) << endl;
        }
    break;
// SUBTRACTION CODE ------------------
    case 2:
    int numb1, numb2;
    //char opcode;

    cout << "\nThis is the subtraction practice" << endl;
    cout << "Enter an expression (for instance 3-3)" << endl;
    cin >> numb1 >> opcode >> numb2;
    cout << "You entered: " << numb1 << " " << opcode << " " << numb2 << endl;
    if (opcode == '-')
        {
            cout << "difference equals " << subtract(numb1,numb2) << "\n" << endl;
        }
    break;
    // MULTIPLACTION CODE ------------------
    //int numb1, numb2;
    //char opcode;
    case 3:
    cout << "\nThis is the multiplication practice" << endl;
    cout << "Enter an expression (for instance 3*3)" << endl;
    cin >> num1 >> opcode >> num2;
    cout << "You entered: " << num1 << " " << opcode << " " << num2 << endl;
    if (opcode == '*')
        {
            cout << "The multiplication equals " << multiply(num1,num2) << "\n" << endl;
        }
    break;
    // DIVISION CODE ------------------
    case 4:
    int number1, number2;
    //char opcode;

    cout << "\nThis is the division practice" << endl;
    cout << "Enter an expression (for instance 3/3)" << endl;
    cin >> number1 >> opcode >> number2;
    cout << "You entered: " << number1 << " " << opcode << " " << number2 << endl;
    if (opcode == '/')
        {
            cout << "The division equals " << division(number1,number2) << "\n" << endl;
        }

    break;
    case 0:
            cout << "Exiting" << endl;
            break;
    default:
            cout << "\nInvalid option\n" << endl;
        }
    } while (choice != 0);
    return 0;
}
    //int num1=0;
    //int num2=0;


    //testAdd();




int main()
{
    // for now the main() just calls the main menu
    main_menu();
    return 0;
}

void main_menu()
{
    // lets the user choose the calculator functions
    int choice;

    do
    {
        // display menu
        print_main_menu();
        // branch on user input
        cout << "Option (1,2,0): ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\nArithemtic Menu\n" << endl;
            main_arithmetic();
            break;
        case 2:
            cout << "\nTemperature Converter\n" << endl;
            tempConvertMenu();
            break;
        case 0:
            cout << "Exiting" << endl;
            break;
        default:
            cout << "\nInvalid option\n" << endl;
        }
    }while (choice != 0); //exit on menu option zero
}

void print_main_menu()
{
    //display the main menu
    cout << "Main menu here" << endl;
}


