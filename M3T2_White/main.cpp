// CSC 134
// M3T2
// 02/07/2019
// Matthew White


#include <iostream>

using namespace std;

void createPayChartWithFor()
{
    cout << "This is the pay chat using for()" << endl;
    int hours = 30;
    float hourlyPay;
    float grossPay;

    //ask user for hourly pay
    cout << "What is your hourly pay? ";
    cin >> hourlyPay; "\n";

    //Loop through and show pay
    cout << "Hours\t\tGross_Pay" << endl;
    cout << "________________________" << endl;
    for (hours=30; hours<=40; hours++)
{
    grossPay = hours * hourlyPay;
    cout << hours << "\t" << "\t" << grossPay << endl;
}


}

void createPayChartWithWhile()
{
    cout << "This is the pay chart using while()" << endl;
    int hours = 30;
    float hourlyPay;
    float grossPay;

    // Ask user for hourly pay
    cout << "What is your hourly pay? ";
    cin >> hourlyPay; "\n";

    // loop through and show pay
    cout << "Hours\t\tGross_Pay" << endl;
    cout << "________________________" << endl;
    while (hours <= 40)
{
    grossPay = hours * hourlyPay;
    cout << hours << "\t" << "\t" << grossPay << endl;
    hours++;
}






}

int main()
{

    // Print the User's hours and total gross pay
    // Using for loop
    createPayChartWithFor();


    // Print the User's hours and total gross pay
    // Using a while loop
    createPayChartWithWhile();





    return 0;
}

