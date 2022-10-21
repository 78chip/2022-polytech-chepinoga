#include <iostream>
using namespace std;

int main()
{
    char o;
    float n1, n2, n12;

    cout << "Enter the operands and operator (+, -, *, /, ^)" << endl;
    cout << "Example: 2+2" << endl;
    cin >> n1 >> o >> n2;

    n12 = n1;

    switch (o) {

    case '+':
        cout << n1 << " + " << n2 << " = " << n1 + n2;
        break;

    case '-':
        cout << n1 << " - " << n2 << " = " << n1 - n2;
        break;

    case '*':
        cout << n1 << " * " << n2 << " = " << n1 * n2;
        break;

    case '/':
        cout << n1 << " / " << n2 << " = " << n1 / n2;
        break;

    case '^':
        for (int i = 1; i < n2; i++) {
            n12 = n12 * n1;
        }
        cout << n1 << " ^ " << n2 << " = " << n12;
        break;

    default:
        cout << "Mistake! The menu item is missing?";
        break;
    }

    return 0;

}
