#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

void ChangeSizeVector(vector<int> &v, const int &number)
{
    if (number >= 0)
    {
        for (int i = 0; i < number; i++)
            v.push_back(0);
    }
    else
    {
        for (int i = 0; i < -number; i++)
            v.pop_back();
    }
}

void ChangeElemInVector(const string &str, vector<int> &v, const int &index)
{
    if (index < v.size())
    {
        if (str == "WORRY")
            v[index] = 1;
        else if (str == "QUIET")
            v[index] = 0;
        else
            cout << "Not valid operation name" << endl;
    }
    else
        cout << "Not valid operand" << endl;
}

int main() {
    vector<int> myQueue;
    vector<unsigned int> out;

    string firstLine;
    getline(cin, firstLine);
    unsigned int nOperations = stoi(firstLine);

    while (nOperations > 0)
    {
        vector<string> operation;
        int operand = 0;

        string str, item;
        std::getline(std::cin, str);
        stringstream ss(str);

        while (getline(ss, item, ' ')) 
            operation.push_back(item);
        
        if (operation.size() == 2)
        {
            operand = stoi(operation[1]);
            if (operation[0] == "COME")
                ChangeSizeVector(myQueue, operand);
            else 
                ChangeElemInVector(operation[0], myQueue, operand);
        }
        else if (operation[0] == "WORRY_COUNT")
        {
            unsigned int worryCount = 0;
            for (const auto &i : myQueue)
                if (i == 1)
                    worryCount++;
            out.push_back(worryCount);
        }
        else
            cout << "Not valid operation name" << endl;
        
        operation.clear();
        nOperations--;
    }

    for (const auto &i : out)
        cout << i << endl;
        
    return 0;
}
