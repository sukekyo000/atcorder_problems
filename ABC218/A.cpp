#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    int N;

    cin >> N >> S;

    if(S[N - 1] == 'o'){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}