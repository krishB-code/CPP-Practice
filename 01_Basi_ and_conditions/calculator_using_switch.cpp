#include <iostream>
using namespace std;
int main()
{
    char op;
    double n1, n2;
    cout << "Enter operator (+,-,*,/)" << endl;
    cin >> op;
    cout << "enter number 1 and 2: " << endl;
    cin >> n1 >> n2;
    switch (op)
    {
    case '+':
        cout << n1 << "+" << n2 << "=" << n1 + n2 << endl;
        break;

    case '-':
        cout << n1 << "-" << n2 << "=" << n1 - n2 << endl;
        break;

    case '*':
        cout << n1 << "*" << n2 << "=" << n1 * n2 << endl;
        break;

    case '/':
        cout << n1 << "/" << n2 << "=" << n1 / n2 << endl;

    default:
        cout << "Invalid operator !!" << endl;
    }
    return 0;
}