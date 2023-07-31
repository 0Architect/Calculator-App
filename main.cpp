#include <iostream>
using namespace std;

double solve(double a, double b, int c)
{
    double ret = 0.0;
    if (c == 1) ret = a + b;
    else if(c == 2) ret = a - b;
    else if(c == 3) ret = a * b;
    else if(c == 4) ret = a / b;
    return ret;
}

int main()
{
    cout << "Welcome to the Basic calculator!" << '\n';
    bool run = true;

    while(run){
    double firstNumber, secondNumber;
    int operationNumber;
    char operationCharacter;
    cout << "Enter the first number: ";
    cin >> firstNumber; 
    cout << "Enter the second number: ";
    cin >> secondNumber; 
    cout << '\n';
    cout << "Choose an operation: " << '\n';
    cout << "1. Addition" << '\n';
    cout << "2. Subtraction" << '\n';
    cout << "3. Multiplication" << '\n';
    cout << "4. Division" << '\n' <<'\n';
    cout << "Enter the operation number: ";
    cin >> operationNumber;
    switch(operationNumber)
    {
        case 1:
            {operationCharacter = '+'; break;}
        case 2:
            {operationCharacter = '-'; break;}
        case 3:
            {operationCharacter = '*'; break;}
        case 4:
            {operationCharacter = '/'; break;}
    }
    cout << '\n';
    cout << "Result: " << firstNumber << " " << operationCharacter << " " << secondNumber << " = " << solve(firstNumber, secondNumber, operationNumber);
    cout << '\n' <<'\n';
    cout << "Do you want to perform another calculation? (y/n): " ;
    char ans;
    cin >> ans;
    cout << '\n';
    if(tolower(ans) == 'n') run = false;
    else run = true;
}
    cout << "Goodbye! Thank you for using the Basic Calculator.";
    return 0;
}