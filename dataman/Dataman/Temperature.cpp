#include <iostream>
#include "Arithmetic.h"

using namespace std;

//float convertKtoC(float tempC);
//float convertCtoK(float tempC)

float convertCtoK(float tempC)
{
    float tempK;
    cout << "\nConverting Kevin to Celsius." << endl;
    cout << "Enter the temperature in Kevin: ";
    cin >> tempK;
    tempC = tempK - 273.15;
    cout << "The temperature in Celsius is " << tempC << "\n" << endl;

}

float convertKtoC(float tempK)
{
    float tempC;
    cout << "\nConverting Celsius to Kevin." << endl;
    cout << "Enter the temperature in Celsius: ";
    cin >> tempC;
    tempK = tempC + 273.15;
    cout << "The temperature in Kevin is " << tempK << "\n" << endl;

}


void tempConvertMenu()
{
    int choice;
    float tempK, tempC;
    do
    {
        cout << "Option (1,2,0): ";
        cin >> choice;
        switch (choice)
        {
        case 1:

        convertCtoK(tempC);
            break;
        case 2:

        convertKtoC(tempK);
            break;
        case 0:
            cout << "Exiting \n" << endl;
            }
        }while (choice != 0);
}


