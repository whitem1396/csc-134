#include <iostream>
#include "Arithmetic.h"

using namespace std;



void tempConvertMenu()
{
    int choice;

    do
    {
        cout << "Option: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "1" << endl;
            float convertKtoC(float tempK);
            break;
        case 2:
            cout << "2" << endl;
            float convertCtoK(float tempC);
            break;
        case 0:
            cout << "Exiting" << endl;
            }
        }while (choice != 0);
}


float convertKtoC(float tempK)
{
    float tempC = tempK - 273.15;
    cout << "Enter a temperature in Celsius: ";
    cin >> tempK;
    return tempC;
}

float convertCtoK(float tempC)
{
    float tempK = tempC + 273.15;

    return tempK;
}


