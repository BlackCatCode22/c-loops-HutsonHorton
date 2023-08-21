//StringsAndLoops.cpp
///Hutson Horton
// Aug 21, 2023

#include <iostream>

using namespace std;

int main()
{


        cout << "The quick brown fox jumped over the lazy dog." << endl;


    //Declare String for easier manipulation
        string fox = "The quick brown fox jumped over the lazy dog.";

    //Length Output
        cout << "\nThe length of this phrase is " << fox.length() << " characters." << endl;

    //Using the find() function to find the word fox in the string fox

    cout << "The word fox begins at index position " << fox.find("fox") << "." << endl;

    int atIndexFour = fox.at(4);

    cout << "The character " << atIndexFour << " is at index position four. This is the ascii code of Q." << endl;


    //Size
    cout << "size() = " << fox.size() << endl;

    //Append
    cout << "append() = " << fox.append("xyz") << endl;

    //Length
    cout << "length() = " << fox.length() << endl;

    //Clear
    //cout << "clear() = " << fox.clear(8, 12) << endl;


    //If empty()
    if (fox.empty()) {
        cout << "\n The string is empty";

    }
    else {
        cout << "The string is NOT empty.";
    }


    // subtr()
    //find the characters starting at the 7th index position, and ending at the 12th.

    string foxSubString = fox.substr(7,5);
    cout << "\n Substring from the 7th index position to the 12th:" << foxSubString << endl;

    cout << "\n\n\n\n" << endl;


    //Loop Control Variable, must be initialized, checked, and changed.


    for(int i = 0; i < 5; i++){
        cout << "\nHello, i is " << i <<".";
    }


    //The factorial of a number
    //6!=1*2*3*4*5*6=720
    //Define Variables
    int factorial = 1;
    int number;

    //Ask User for Number to Factorialize
    cout << "\nNumber: ";
    cin >> number;

    for (int i=1; i <= number;i++){

        factorial = factorial * i;
        cout << factorial << endl;

    }

    cout << number << "! = " << factorial;


    //for (int i = number; i >= 1; i--) {
    //factorial = factorial * i;
    //}





    return 0;
}
