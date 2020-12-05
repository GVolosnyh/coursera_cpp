#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> Reversed(const vector<int>& v)
{   
    vector<int> result;
    for (int i = v.size() - 1; i >= 0; --i) {
        result.push_back(v[i]);
    }
    return result;
}

int main() {
    vector<int> numbers = {1, 5, 3, 4, 2};
    vector<int> result;
    result = Reversed(numbers);
    for (auto elem : result)
        cout << elem << " ";
    return 0;
}
