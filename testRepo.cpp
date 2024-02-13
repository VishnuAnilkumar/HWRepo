#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char operation;
    double num1, num2;
    do {
        cout << "Enter an operator (+, -, *, /): ";
        cin >> operation;
        if(operation == '+' || operation == '-' || operation == '*' || operation == '/' || operation == '^' || operation == '%') {
            cout << "Enter two operands: ";
            cin >> num1 >> num2;
        } else if (operation == 'sqrt') {
            cout << "Enter the number: ";
            cin >> num1;
        } else {
            cout << "Error! Invalid operator." << endl;
            continue;
        }

        switch(operation) {
            case '+':
                cout << num1 << " + " << num2 << " = " << num1 + num2;
                break;
            case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2;
                break;
            case '/':
                if (num2 != 0)
                    cout << num1 << " / " << num2 << " = " << num1 / num2;
                else
                    cout << "Error! Division by zero!";
                break;
            case '^':
                cout << num1 << " ^ " << num2 << " = " << pow(num1, num2);
                break;
            case '%':
                cout << "The remainder of " << num1 << " / " << num2 << " = " << fmod(num1, num2);
                break;
            case 'sqrt':
                if (num1 >= 0) {
                    cout << "Square root of " << num1 << " = " << sqrt(num1);
                }
                else {
                    cout << "Can't calculate square root! " << endl;
                    break;
                }
        }
        cout << endl;
        char choice;
        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;
        if (choice != 'y' && choice != 'Y') {
            break;
        }
    } while(true);
    cout << "Goodbye!" << endl;
    cout << "Editing on experimental branch" << endl;
    return 0;
}
