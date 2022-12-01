#include <iostream>
using namespace std;

int main() {
    string S;
    int a, b;

    cin >> S;

    a = S[0] - 48;
    b = S[2] - 48;

    cout << a * b << endl;

    return 0;
}