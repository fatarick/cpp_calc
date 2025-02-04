#include <iostream>

using namespace std;

int main() {
    cout << "Welcome to Simple C++ Calculator" << endl;
    double number1;
    cout << "Enter number one: ";
    cin >> number1;
    double number2;
    cout << "Enter number two: ";
    cin >> number2;
    char operation;
    cout << "Enter Your Operation (+, -, *, /): ";
    cin >> operation;

    if (operation == '+') {
        cout << number1 + number2;
    }
    else if (operation == '-'){
        cout << number1 - number2;
    }
    else if (operation == '*'){
        cout << number1 * number2;
    }
    else if (operation == '/'){
        cout << number1 / number2;
    }
    else{
        cout << "Invalid Operation";
    }

    return 0;
}