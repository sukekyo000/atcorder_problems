#include <iostream>
using namespace std;

int main() {
    string S;

    cin >> S;

    for(int i = 0; i < 4; i++){
        if(i == 0){
            cout << 0;
        } else {
            if(S[i - 1] == 49){
                cout << 1;
            } else if(S[i - 1] == 48){
                cout << 0;
            }
        }
    }

    cout << endl;

    return 0;
}