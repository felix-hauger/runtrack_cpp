#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter an integer... ";

    cin >> num;

    cout << (num % 2 == 0 ? "even" : "odd");
 
    return 0;
}