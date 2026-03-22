// lab0Exercise.cpp: This file contains a small math program
// Author: MD Habibur Rahman

#include <iostream>

using namespace std;

// Function Prototypes
double sumOfTwoNum(double num1, double num2);
double areaOfCircle(double r);
double cirOfCircle(double r);

int main()
{
    int choice;

    do
    {
        cout << "\n0) Exit.";
        cout << "\n1) sum two numbers.";
        cout << "\n2) Calculate area of a circle.";
        cout << "\n3) Calculate circumference of a circle.";
        cout << "\n4) Calculate price with VAT.";
        cout << "\nEnter choice: ";

        cin >> choice;

        switch (choice)
        {
        case 0: // No code needed
            break;
        case 1:
            int num1, num2;

            cout << "Enter two numbers ";
            cin >> num1 >> num2;
            cout << "\nResult of sum: " << sumOfTwoNum(num1, num2);
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        default:
            cerr << "\nWrong choice!";
            break;
        }
    } while (choice != 0);
    cout << "\nPlease try me again:) ";

    return 0;
}

// Returns the sum of the two values
double sumOfTwoNum(double num1, double num2)
{
    return num1 + num2;
}