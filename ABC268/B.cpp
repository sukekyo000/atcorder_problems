#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;
    bool check = true;

    cin >> S >> T;

    for(int i = 0; i < S.length(); i++){
        if(S[i] != T[i]){
            check = false;
        }
    }

    if(check){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}