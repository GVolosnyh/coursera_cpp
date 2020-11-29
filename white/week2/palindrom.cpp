#include <iostream>
#include <string>

using namespace std;

bool IsPalindrom(string test_string)
{
    if (test_string.size() > 1)
    {
        for (int i = 0; i < test_string.size() / 2; i++)
        {
            if (test_string[i] != test_string[test_string.size() - (i + 1)])
                return false;
        }
    }
    return true;
}

int main()
{
    string myString;
    cin >> myString;
    cout << IsPalindrom(myString);
    return 0;
}
