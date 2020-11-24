#include <iostream>
using namespace std;

int main() {
    float N, A, B, X, Y;

    cin >> N >> A >> B >> X >> Y;

    if (A < B) {
        if (N > A && N <= B) 
            cout << N - N / 100 * X << endl;
        else if (N > B)
            cout << N - N / 100 * Y << endl;
        else
            cout << N << endl;
        
    } 
    else
        cout << "Pleas enter correct value: A >=B" << endl; 
        
    return 0;
}