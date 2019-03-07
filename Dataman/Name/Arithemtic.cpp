#include <iostream>
#include "Arithmetic.h"

using namespace std;

// Addition Operation
int add(int num1, int num2)
{
    // take two ints, find the sum, return it
    int sum = num1 + num2;
    return sum;
}

// Subtraction Operation
int subtract(int numb1, int numb2)
{
    // take two ints, return the difference
    int difference = numb1 - numb2;
    return difference;
}

//Multiplication Operation
int multiply(int num1, int num2)
{

    int multiplcation = num1 * num2;
    return multiplcation;

}

//Division Operation
float division(float number1, float number2)
{

    float divide = number1 / number2;
    return divide;
}


int main_arithmetic()
{



int choice;
    // main calc loop
    // ADDITION CODE -----------------
do
    {

        // branch on user input
        cout << "----Arithmetic Menu----" << endl;
        cout << "Addition - 1" << endl;
        cout << "Subtraction - 2" << endl;
        cout << "Multiplication - 3" << endl;
        cout << "Division - 4" << endl;
        cout << "\nOptions (1,2,3,4,0): ";
        cin >> choice;
    switch(choice)
        {
    case 1:
    int num1, num2;
    char opcode;
    cout << "\nThis is addition" << endl;
    cout << "Enter an expression (for instance 3+3)" << endl;
    cin >> num1 >> opcode >> num2;
    cout <<"You entered: " << num1 << " " << opcode << " " << num2 << endl;
    if (opcode == '+')
        {
            cout << "The sum equals: " << add(num1,num2) << "\n" << endl;
        }
    break;
// SUBTRACTION CODE ------------------
    case 2:
    int numb1, numb2;

    cout << "\nThis is subtraction" << endl;
    cout << "Enter an expression (for instance 3-3)" << endl;
    cin >> numb1 >> opcode >> numb2;
    cout << "You entered: " << numb1 << " " << opcode << " " << numb2 << endl;
    if (opcode == '-')
        {
            cout << "The difference equals: " << subtract(numb1,numb2) << "\n" << endl;
        }
    break;
    // MULTIPLACTION CODE ------------------

    case 3:
    cout << "\nThis is multiplication" << endl;
    cout << "Enter an expression (for instance 3*3)" << endl;
    cin >> num1 >> opcode >> num2;
    cout << "You entered: " << num1 << " " << opcode << " " << num2 << endl;
    if (opcode == '*')
        {
            cout << "The multiplication equals: " << multiply(num1,num2) << "\n" << endl;
        }
    break;
    // DIVISION CODE ------------------
    case 4:
    int number1, number2;

    cout << "\nThis is division" << endl;
    cout << "Enter an expression (for instance 3/3)" << endl;
    cin >> number1 >> opcode >> number2;
    cout << "You entered: " << number1 << " " << opcode << " " << number2 << endl;
    if (opcode == '/')
        {
            cout << "The division equals: " << division(number1,number2) << "\n" << endl;
        }

            break;
    case 0:
            cout << "\nExiting\n" << endl;
            break;
    default:
            cout << "\nInvalid option\n" << endl;
        }
    } while (choice != 0);
    return 0;
}
