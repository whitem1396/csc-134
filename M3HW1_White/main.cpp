// CSC 134
// M3HW1
// 02/07/2019
// Matthew White

#include <iostream>
#include <math.h>

using namespace std;

// AddOne function for Listing 5-5
    int AddOne(int start)
{
    int newnumber;
    newnumber = start + 1;
    return newnumber;
}

int main()
{

    // Listing 5-1

    cout << fabs(-10.5) << endl;
    cout << fabs(10.5) << endl;


    // Listing 5-2

    double mynumber;
    mynumber = fabs(-23.87);
    cout << mynumber << endl;

    // Listing 5-3

    double start;
    double finish;

    start = -253.895;
    finish = fabs(start);

    cout<< finish << endl;

    // Listing 5-4

    double number = 10.0;
    double exponent = 3.0;

    cout << pow(number, exponent) << endl;

    // Listing 5-5


    int testnumber;
    int result;

    testnumber = 20;
    result = AddOne(testnumber);

    cout << result << endl;

    return 0;
}
