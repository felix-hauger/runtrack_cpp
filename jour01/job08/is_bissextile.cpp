#include <iostream>

using namespace std;

bool is_bissextile(int year)
{
    bool result;

    if (year % 100 == 0) {
        if (year % 400 == 0) {
            result = true;
        } else {
            result = false;
        }
    } else if (year % 4 == 0) {
        result = true;
    } else {
        result = false;
    }
    
    return result;
}

int main()
{
    int year;

    cout << "Enter the year to find out if it is bissextile" << endl;

    cin >> year;

    cout << "The year " << year << " is " << (is_bissextile(year) ? "" : "not ") <<  "bissextile" << endl;
}