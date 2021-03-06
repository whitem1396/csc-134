#include <iostream>


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
    cout << "The temperature in Celsius is: " << tempC << "\n" << endl;

}

float convertKtoC(float tempK)
{
    float tempC;
    cout << "\nConverting Celsius to Kevin." << endl;
    cout << "Enter the temperature in Celsius: ";
    cin >> tempC;
    tempK = tempC + 273.15;
    cout << "The temperature in Kevin is: " << tempK << "\n" << endl;

}

float convertCtoF(float tempC)
{
  float tempF;
  cout << "\nConverting Celsius to Fahrenheit." << endl;
  cout << "Enter the temperature in Celsius: ";
  cin >> tempC;
  tempF = (tempC * 1.8) + 32;
  cout << "The temperature in Fahrenheit is: " << tempF << "\n" << endl;

}

float convertFtoC (float tempF)
{
  float tempC;
  cout << "\nConverting Fahrenheit to Celsius." << endl;
  cout << "Enter the temperature in Fahrenheit: ";
  cin >> tempF;
  tempC = (tempF - 32) / 1.8;
  cout << "The temperature in Celsius is: " << tempC << "\n" << endl;
}


void tempConvertMenu()
{
    int choice;
    float tempK, tempC, tempF;
    do
    {
        cout << "----Temperature Convert Menu----" << endl;
        cout << "Celsius to Kevin - 1" << endl;
        cout << "Kevin to Celsius - 2" << endl;
        cout << "Fahrenheit to Celsius - 3" << endl;
        cout << "Celsius to Fahrenheit - 4" << endl;
        cout << "\nOptions (1,2,3,4,0): ";
        cin >> choice;
        switch (choice)
        {
        case 1:

        convertCtoK(tempC);
            break;

        case 2:

        convertKtoC(tempK);
            break;

        case 3:

        convertFtoC(tempF);
            break;

        case 4:

        convertCtoF(tempC);
            break;

        case 0:
            cout << "\nExiting\n" << endl;
            break;
        default:
            cout << "\nInvalid option\n" << endl;
            }
        }while (choice != 0);
}

