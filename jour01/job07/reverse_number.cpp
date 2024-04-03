#include <iostream>
#include <cstring>
#include <regex>

using namespace std;

int main ()
{
    int number;
    int result;
    int modulo;

    cout << "Enter an integer to reverse" << endl;

    cin >> number;

    result = 0;

    while (number > 0) {
        result *= 10;
        modulo = number % 10;
        number -= modulo;
        number /= 10;
        result += modulo;
    }

    cout << "Reversed: " << result << endl;

    return 0;
}