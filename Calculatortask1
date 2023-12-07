#include <iostream>

using namespace std;

int main()
 {
    double no1, no2, result; 
    char operation;

    cout << "Welcome to the TK's Calculator!\n";  // Welcome message
    cout << "Enter the first number: ";           // First input message
    cin >> no1;

    cout << "Enter the second number: ";         // Second input message
    cin >> no2;

    cout << "Choose your operation to perform (+, -, *, /): ";   // Operations available
    cin >> operation;

    switch (operation)
    {
        case '+':
            result = no1 + no2;
            cout << " Sum of " << no1 << " and " << no2 << " is: " << result << endl;  // Addition operation
            break;

        case '-':        
            result = no1 - no2;
            cout << "Difference of " << no1 << " and " << no2 << " is: " << result << endl;  // Subtraction operation
            break;

        case '*':
            result = no1 * no2;
            cout << " Product of " << no1 << " and " << no2 << ": " << result << endl;  //  Multiplication operation
            break;

        case '/':
            if (no2 != 0) 
            {
                result = no1 / no2;
                cout << "Quotient of " << no1 << " and " << no2 << " is: " << result << endl;  // Division operation
            } else 
            {
                cout << "Error! Division by zero is forbidden by the cosmic laws.\n";  //  Division by zero operation
            }
            break;

        default:
            cout << "Invalid operation. Please choose +, -, *, or /.\n";  // Invalid operation 124
            
            break;
    }
cout<<"Thankyou for choosing TK's calculator to perform opertions !!"<<endl;   //Thankyou message
    return 0;
}
