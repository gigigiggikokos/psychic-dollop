#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    cout << "Введите выражение (например, 2 + 2): ";
    cin >> num1 >> op >> num2;

    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if(num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            else
                cout << "Ошибка: деление на ноль!" << endl;
            break;
        default:
            cout << "Ошибка: неизвестная операция!" << endl;
    }
    return 0;
}
