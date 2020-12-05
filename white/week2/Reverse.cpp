#include <iostream>
#include <vector>
#include <string>

using namespace std;

 void Reverse(vector<int>& v)
{   
    int buf = 0;
    for (int i = 0; i < v.size() / 2; i++)
    {
        buf = v[i];
        v[i] = v[v.size() - (i + 1)];
        v[v.size() - (i + 1)] = buf;
    }
}

int main() {
    vector<int> numbers = {1, 5, 3, 4, 2};
    Reverse(numbers);
    for (auto elem : numbers)
        cout << elem << " ";
    return 0;
}
