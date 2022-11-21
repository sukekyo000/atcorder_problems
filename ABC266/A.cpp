#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char S[99];

    cin >> S;

    cout << S[strlen(S) / 2] << endl;

    return 0;
}