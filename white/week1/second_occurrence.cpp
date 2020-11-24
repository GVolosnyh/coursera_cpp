#include <iostream>
#include <string>
using namespace std;

int main() {
    string myString;
    unsigned int fCount = 0;
    unsigned int indexSecondF = 0;

    getline(cin, myString);

    for (int i = 0; i < myString.length(); i++)
    {
        if (myString[i] == 'f')
            fCount++;
        
        if (fCount == 2)
        {
            indexSecondF = i;
            break;
        }
    }
    
    if (indexSecondF != 0)
        cout << indexSecondF;
    else if (fCount == 0)
        cout << -2;
    else if (fCount == 1)
        cout << -1;

    return 0;
}