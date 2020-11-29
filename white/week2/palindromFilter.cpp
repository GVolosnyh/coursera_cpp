#include <iostream>
#include <vector>
#include <string>

#define SIZE 3

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

vector<string> PalindromFilter(vector<string> words, int minLength)
{
    vector<string> result;
    for (auto word : words)
    {
        if (word.size() >= minLength && IsPalindrom(word))
        {
            result.push_back(word);
        }
    }
    return result;
}

int main()
{
    string inputWord;
    int minLegth = 0;
    cin >> minLegth;
    vector<string> Vin, Vout;
    while (cin >> inputWord)
        Vin.push_back(inputWord);

    Vout = PalindromFilter(Vin, minLegth);
    for (auto word : Vout)
        cout << word << " ";

    return 0;
}
