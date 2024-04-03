#include <iostream>

using namespace std;

int main()
{
    double num1;
    double num2;
    double tmp;

    cout << "Enter 2 numbers" << endl;

    cin >> num1 >> num2;

    cout << "Number 1 : " << num1 << endl;
    cout << "Number 2 : " << num2 << endl;

    cout << "Swapping numbers..." << endl;

    tmp = num1;
    num1 = num2;
    num2 = tmp;

    cout << "Numbers swapped" << endl;

    cout << "Number 1 : " << num1 << endl;
    cout << "Number 2 : " << num2 << endl;

    return 0;
}