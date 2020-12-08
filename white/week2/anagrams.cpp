#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

map<char, int> BuildCharCounters(const string& word)
{
    map<char, int> charCount;
    for (const auto& item : word)
        charCount[item]++;
    return charCount;
}

int main() {
    int N;
    vector<string> str;
    cin >> N;

    for (int i = 0; i < N; i++)
    {   

        string first, second;
        cin >> first;
        cin >> second;
        str.push_back(first);
        str.push_back(second);

        if (BuildCharCounters(str[0]) == BuildCharCounters(str[1]))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        str.clear();
    }
    return 0;
}
