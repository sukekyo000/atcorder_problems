#include <iostream>
using namespace std;

int main() {
    int A, B, C, D;

    cin >> A >> B >> C >> D;

    if(A > C){
        cout << "Aoki" << endl;
    } else if (A < C){
        cout << "Takahashi" << endl;
    } else {
        if(B <= D){
            cout << "Takahashi" << endl;
        } else {
            cout << "Aoki" << endl;
        }
    }

    return 0;
}