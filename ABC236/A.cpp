#include <iostream>
#include <math.h>

using namespace std;

int main() {
    string S;
    int a, b;
    char temp1, temp2;

    cin >> S >> a >> b;

    temp1 = S[a - 1];
    temp2 = S[b - 1];

    S[a - 1] = temp2;
    S[b - 1] = temp1;

    cout << S << endl;

    return 0;
}