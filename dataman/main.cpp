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
    // main calc loop
    // ADDITION CODE -----------------

    int num1, num2;
    char opcode;
    cout << "Enter an expression (for instance 3+3" << endl;
    cin >> num1 >> opcode >> num2;
    cout <<"You entered: " << num1 << " " << opcode << " " << num2 << endl;
    if (opcode == '+')
        {
            cout << "That's addition." << endl;
            cout << "Sum equals " << add(num1,num2) << endl;
        }

// SUBTRACTION CODE ------------------
    int numb1, numb2;
    //char opcode;

    cout << "This is the subtraction practice" << endl;
    cout << "Enter an expression (for instance 3-3)" << endl;
    cin >> numb1 >> opcode >> numb2;
    cout << "You entered: " << numb1 << " " << opcode << " " << numb2 << endl;
    if (opcode == '-')
        {
            cout << "That's subtraction." << endl;
            cout << "difference equals " << subtract(numb1,numb2) << "\n" << endl;
        }

    // MULTIPLACTION CODE ------------------
    //int numb1, numb2;
    //char opcode;

    cout << "This is the multiplication practice" << endl;
    cout << "Enter an expression (for instance 3*3)" << endl;
    cin >> num1 >> opcode >> num2;
    cout << "You entered: " << num1 << " " << opcode << " " << num2 << endl;
    if (opcode == '*')
        {
            cout << "That's multiplication." << endl;
            cout << "The multiplication equals " << multiply(num1,num2) << "\n" << endl;
        }

    // DIVISION CODE ------------------
    int number1, number2;
    //char opcode;

    cout << "This is the division practice" << endl;
    cout << "Enter an expression (for instance 3/3)" << endl;
    cin >> number1 >> opcode >> number2;
    cout << "You entered: " << number1 << " " << opcode << " " << number2 << endl;
    if (opcode == '/')
        {
            cout << "That's division." << endl;
            cout << "The division equals " << division(number1,number2) << "\n" << endl;
        }


    //int num1=0;
    //int num2=0;

    cout << "Enter a number: ";
    cin >> num1;

    cout << "Enter another number: ";
    cin >> num2;


    cout << "The total is: " << add(num1,num2) << endl;

    //testAdd();

    return 0;
}

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
        cout << "Option: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "1" << endl;
            main_arithmetic();
            break;
        case 2:
            cout << "2" << endl;
            tempConvertMenu();
            break;
        case 0:
            cout << "Exiting" << endl;
            break;
        default:
            cout << "Invalid option" << endl;
        }
    }while (choice != 0); //exit on menu option zero
}

void print_main_menu()
{
    //display the main menu
    cout << "Main menu here" << endl;
}


