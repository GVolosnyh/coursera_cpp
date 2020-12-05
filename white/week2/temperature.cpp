#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    unsigned int nDays = 0;
    unsigned int mean = 0;
    vector<unsigned int> tempDaysAboveMean;
    cin >> nDays;
    vector<unsigned int> tempDays(nDays);
  
    for (auto& it : tempDays)
        cin >> it;

    unsigned int sum = accumulate(begin(tempDays), end(tempDays), 0.0);
    mean =  sum / tempDays.size();
    for (int i = 0; i < tempDays.size(); i++)
    {
        if (tempDays[i] > mean)
            tempDaysAboveMean.push_back(i);
    }

    cout << tempDaysAboveMean.size() << endl;
    for (auto& it : tempDaysAboveMean)
        cout << it << " ";

    return 0;
}
