#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;

    cin >> S;

    if(S.length() == 3){
        if(S[2] <= 50){
            cout << S[0] << "-" << endl;
        } else if (55 <= S[2]){
            cout << S[0] << "+" << endl;
        } else {
            cout << S[0] << endl;
        }
    } else {
        if(S[3] <= 50){
            cout << S[0] << S[1] << "-" << endl;
        } else if (55 <= S[3]){
            cout << S[0] << S[1] << "+" << endl;
        } else {
            cout << S[0] << S[1] << endl;
        }
    }

    return 0;
}