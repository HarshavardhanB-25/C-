#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[100];
    int count = 0;

    cout << "Enter a string to test :" << endl;
    cin.get(str, 100);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (!isspace(str[i]))
        {
            count++;
        }
    }

    cout << "Total number of characters found :  " << count << endl;
}
