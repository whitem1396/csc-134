// CSC 134

// M2LAB2

// White Matthew

// 01/24/2019

#include <iostream>

using namespace std;

int main()
{
    float numberGrade = 0;
    char letterGrade;



    cout << "Enter Grade: " << endl;
    cin  >> numberGrade;

    if (numberGrade >= 89.5)
    {
        letterGrade = 'A';
    } else
    if (numberGrade >= 79.5)

    {
        letterGrade = 'B';
    } else
    if (numberGrade >= 69.5)

    {
        letterGrade = 'C';
    } else
    if (numberGrade >= 59.5)
    {
        letterGrade = 'D';
    } else
    if (numberGrade < 59.5)
    {
        letterGrade = 'F';
    }

    cout << "The letter grade is a " << letterGrade << endl;
    return 0;
}
