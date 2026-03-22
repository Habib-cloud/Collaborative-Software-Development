// lab0Exercise.cpp: This file contains a small math program
// Author: MD Habibur Rahman

#include <iostream>

using namespace std;

// Function Prototypes
double sumOfTwoNum (double num1, double num2);
double areaOfCircle (double r);
double circumferenceOfCircle (double radius);
double priceIncludigVat (double price, int vat);

int main()
{
    int choice;

    do
    {
        cout << "\n1) sum two numbers.";
        cout << "\n2) Calculate area of a circle.";
        cout << "\n3) Calculate circumference of a circle.";
        cout << "\n4) Calculate price with VAT.";
        cout << "\n5) Exit.";

        cout << "\n\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:{
            double num1, num2;

            cout << "Enter two numbers ";
            cin >> num1 >> num2;

            cout << "\nResult of sum: " << sumOfTwoNum(num1, num2) << endl;
            break;
        }
        case 2:{
            
            break;
        }
        case 3:{

            break;
        }
        case 4:{

            break;
        }
        case 5:{
            cout << "Exiting program. Goodbye!\n";
            break;
        }
        default:
            cerr << "\nWrong choice!";
            break;
        }
    } while (choice != 5);

    return 0;
}

// Returns the sum of the two values
double sumOfTwoNum(double num1, double num2)
{
    return num1 + num2;
}