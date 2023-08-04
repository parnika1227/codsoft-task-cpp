
#include <iostream>

using namespace std;
int main() {
    float a, b, c;
    char ch, choice;
    choice = 'y';
    while (choice == 'y')
    {
        cout << "enter first number =";
        cin >> a;
        cout << "enter second number =";
        cin >> b;
        cout << "Enter the operator = ";
        cin >> ch;
        switch (ch) {
        case '+': c = a + b;
            cout << " Answers:" << c;
            break;
        case'-':c = a + b;
            cout << "Answers :" << c;
        case '*': c = a * b;
            cout << "Answers:" << c;
            break;
        case  '/': c = a / b;
            cout << "Answers:" << c;
            break;
        default: cout << "operator is not correct"; break;
        }
        cout << "/n do another (y/n):";
        cin >> choice;
    }
    return�0;
}
