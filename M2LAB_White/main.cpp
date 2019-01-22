// CSC 134

// M2LAB

// Matthew White

// 1/22/19

#include <iostream>

using namespace std;

int main()
{
    string movieName;
    double rating;
    int year;
    char firstLetter;

    movieName = "Glass";
    rating = 7.1;
    year = 2019;
    firstLetter = 'G';

 cout << "The movies name is: ";
 cin >> movieName;
 cout << "It was released in the year: ";
 cin >> year;
 cout << "It has a rating of: ";
 cin >> rating;
 cout << "I would file this movie under: ";
 cin >> firstLetter;

 cout << "The movies name is " << movieName << endl;
 cout << "It was released in the year " << year << "." << " It has a rating of " << rating <<endl;
 cout << "I would file this movie under " << firstLetter << endl;

    return 0;
}
