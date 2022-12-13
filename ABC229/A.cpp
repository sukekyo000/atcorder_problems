#include <bits/stdc++.h>
using namespace std;

int main() {
    string S_1, S_2;

    cin >> S_1 >> S_2;

    if((S_1[0] == '.' && S_2[1] == '.') || (S_1[1] == '.' && S_2[0] == '.')){
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }

    return 0;
}