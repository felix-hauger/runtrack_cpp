#include <iostream>

using namespace std;

int main()
{
    double tmp;
    double result = 0;

    // The i I would use for a loop is a variable
    cout << "Entrez le premier nombre" << ":\n";
    cin >> tmp;
    result += tmp;
    cout << "Entrez le deuxième nombre" << ":\n";
    cin >> tmp;
    result += tmp;
    cout << "Entrez le troisième nombre" << ":\n";
    cin >> tmp;
    result += tmp;
    cout << "Entrez le quatrième nombre" << ":\n";
    cin >> tmp;
    result += tmp;
    cout << "Entrez le cinquième nombre" << ":\n";
    cin >> tmp;
    result += tmp;

    result /= 5;

    cout << "Moyenne des 5 nombres: " << result << "\n";

    return 0;
}