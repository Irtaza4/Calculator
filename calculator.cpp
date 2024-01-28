#include <iostream>

using namespace std;

class Calculator {
    private:
    double num1;
    double num2;

public:
    // Constructor
    Calculator() {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }
    // Function to add two numbers
    double add() ;

    // Function to subtract two numbers
    double subtract() ;

    // Function to multiply two numbers
     // Function to multiply two numbers
    double multiply() {
        return num1 * num2;
    }


    // Function to divide two numbers
    double divide() ;
};

int main() {
   

    return 0;
}