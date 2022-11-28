#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    string S;

    cin >> S;

    for(int i = 0; i < 9; i++){
        sum += S[i] - 48;
    }

    cout << 45 - sum << endl;

    return 0;
}