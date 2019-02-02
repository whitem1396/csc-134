// CSC 134

// M2HW1

// Matthew White

// 01/29/2019


#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Question 1

    // Finding the area of a rectangle through its height and weight
    int height;
    int width;
    float area;

    // Stating the height
    cout << "The height is: ";
    cin >> height;

    // Stating the width;
    cout << "The width is: ";
    cin >> width;

    // Calculating the area with the given variables
    area = height*width;
    cout << "The area is: " << area << "\n" << endl;



    // Question 2

    //Converting Celsius into Fahrenheit
    float celsius;
    float fahrenheit;

    // Inputing the temp in celsius
    cout << "The temperature in celsius is ";
    cin >> celsius;

    // Converting the temperature to fahrenheit
    fahrenheit = (celsius * 1.8) + 32;
    cout << "The temperature in fahrenheit is " << fahrenheit << "\n" << endl;




    // Question 4

    double test1;
    double test2;
    double test3;
    double testAvg;
    double studScore;

    cout <<  "The test 1 score is: ";
    cin >> test1;

    cout << "The test 2 score is: ";
    cin >> test2;

    cout << "The test 3 score is: ";
    cin >> test3;

    studScore = test1 + test2 + test3;
    testAvg = (studScore/3);

    cout << "The test score average is: " << testAvg << "\n" << endl;


    // Question 5

    int lengthFT=0;
    int widthFT=0;
    double sqFT;
    int numWalls=0;

    cout << "What is the length in feet of the wall? ";
    cin >> lengthFT;

    cout << "What is the width in feet of the wall? ";
    cin >> widthFT;

    sqFT = lengthFT * widthFT;
    cout << "The square feet of the wall is " << sqFT << endl;

    cout << "How many walls are there? ";
    cin >> numWalls;

    // Question 6

    int gallons4wall = 0.0;

    gallons4wall = (sqFT / 200 ) * numWalls;
    cout << "You will need " << gallons4wall << " gallons of primer to cover all the walls" << "\n" << endl;

    // Question 7

    int paint4wall = 0.0;

    paint4wall = (sqFT / 350) * numWalls;
    cout << "You will need " << paint4wall << " buckets of paint to cover all the walls." << "\n" << endl;




    return 0;
}
