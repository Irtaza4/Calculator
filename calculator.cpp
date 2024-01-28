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
    double add(){
        return num1 + num2;
    }

    // Function to subtract two numbers
    double subtract(){
        return num1 - num2;
    }

    // Function to multiply two numbers
     // Function to multiply two numbers
    double multiply() {
        return num1 * num2;
    }


    // Function to divide two numbers
      double divide() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Cannot divide by zero!" << endl;
            return 0.0; // You can choose to handle this differently based on your requirements
        }
    }
};

int main() {
   

    return 0;
}
