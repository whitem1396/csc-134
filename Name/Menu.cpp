
#include <iostream>
#include "Arithmetic.h"
#include "Temperature.h"

using namespace std;


void print_main_menu();
int main_arithmetic();

void main_menu()
{
    // lets the user choose the calculator functions
    int choice;

    do
    {
        // display menu
        print_main_menu();
        // branch on user input
        cout << "Arithmetic Menu - 1" << endl;
        cout << "Temperature Converter - 2" << endl;
        cout << "\nOptions (1,2,0): ";
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
            cout << "Exiting\n" << endl;
            break;
        default:
            cout << "\nInvalid option\n" << endl;
        }
    }while (choice != 0); //exit on menu option zero
}

void print_main_menu()
{
    //display the main menu
    cout << "-----Main menu here----" << endl;
}
