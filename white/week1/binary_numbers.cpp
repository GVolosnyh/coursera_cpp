#include <iostream>
#include <vector>

#define BASE 2

using namespace std;

int main() {
    int N;
    int remainder = BASE;
    std::vector<int> binaryResult;

    cin >> N;

    while (N >= BASE)
    {
        remainder = N % BASE;
        N = (N - remainder) / BASE;
        binaryResult.push_back(remainder);
    }
    binaryResult.push_back(N);

    for (int i = binaryResult.size() - 1; i >= 0; i--)
        cout << binaryResult[i];
    return 0;
}
