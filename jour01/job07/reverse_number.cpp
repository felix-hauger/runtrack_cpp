#include <iostream>
#include <cstring>
#include <regex>

using namespace std;

int main ()
{
    char number[100];
    char *result;
    int i;
    int j;

    cout << "Enter an integer to reverse" << endl;

    cin >> number;

    result = (char*)malloc(sizeof(char*) * strlen(number));

    j = 0;
    for (i = strlen(number) - 1; i >= 0; i--) {
        result[j] = number[i];
        j++;
    }

    cout << "Reversed: " << result << endl;

    free(result);

    return 0;
}