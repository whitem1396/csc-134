// CSC 134

// M2T2

// W Matthew

// 1/18/19


#include <iostream>

using namespace std;

int main()
{
    // IfElse

    int i;
    cout << "Type any number: ";
    cin >> i;

    if (i > 10)
    {
        cout << "It's greater than 10." << endl;
    }
    else
    {
        cout << "It's not greater than 10." << endl;
    }

    // IfElse2

    i;
    cout << "Type any number: ";
    cin >> i;

    if (i>10)
{
    cout << "It's greater than 10." << endl;
}

    else if (i == 10)
{
    cout << "It's equal to 10" << endl;
}
    else
{
        cout << "It's less than 10." << endl;
}

    // IfElse3

    i;

    cout << "Type any number: ";
    cin >> i;

    if (i > 100)
    {
    cout << "It's greater than 100." << endl;
    }
    else if (i > 10)
    {
    cout << "It's greater than 10." << endl;
    }
    else
    {
    cout << "It's neither greater than 100 nor greater than 10." << endl;
    }


    // ForLoop

    int x = 0;
    i;

    for (i = 1; i <= 100; i++)
    {
    x += i;
    }

    cout << x << endl;


    // ForCountdown

    i;

    for (i=10; i>=5; i--)
    {
    cout << i << endl;
    }


    // ForLoop2

    double y = 0.0;
    double z;

    for (z = 0.0; z <= 100; z+=0.1)
    {
    y += z;
    }

    cout << y << endl;


    // WhileLoop

    //int i = 0;

    while (i <= 10)
{
    cout << i << endl;
    i++;
}

    cout << "All Finished!" << endl;


    // DoWhileLoop

    //int i = 0;

    do
    {
        cout << i << endl;
        i++;
    }
    while (i <= 10);

    cout << "All Finished!" << endl;

    return 0;
}
