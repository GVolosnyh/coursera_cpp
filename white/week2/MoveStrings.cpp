#include <iostream>
#include <vector>
#include <string>

using namespace std;

void MoveStrings(vector<string> &first_string, vector<string> &second_string)
{   
    for (auto word : first_string)
        second_string.push_back(word);
    first_string.clear();
}

int main() {
    vector<string> source = {"a", "b", "c"};
    vector<string> destination = {"z"};
    MoveStrings(source, destination);
    for (auto word : destination)
        cout << word << " ";
    return 0;
}
