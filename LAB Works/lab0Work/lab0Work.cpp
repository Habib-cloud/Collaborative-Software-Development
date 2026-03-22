// lab0Work.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double sumTwoNumbers(double num1, double num2);

int main()
{
    int choice;

    do {
        cout << "1) Sum of two numbrs.";
        cout << "\n2) Calculate area of circle.";
        cout << "\n3) Calculate circumference of circle.";
        cout << "\n4) Calculate price with VAT";
        cout << "\n5) Exit.";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {

            break;
        }
        case 2: {

            break;
        }
        case 3: {

            break;
        }
        case 4: {

            break;
        }
        case 5: {

            break;
        }
        default: {

        }
        }
    } while (choice != 5);
}