#include <iostream>

using namespace std;

int main() {
    string S;
    int a, b, c, abc, bca, cab;

    cin >> S;

    a = S[0] - 48;
    b = S[1] - 48;
    c = S[2] - 48;

    abc = a * 100 + b * 10 + c;
    bca = b * 100 + c * 10 + a;
    cab = c * 100 + a * 10 + b;

    cout << abc + bca + cab << endl;

    return 0;
}