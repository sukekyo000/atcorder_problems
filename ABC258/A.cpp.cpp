#include <iostream>
using namespace std;

int main() {
    int K;

    cin >> K;

    if(10 > K && K < 60){
        cout << "21:0" << K << endl;
    } else if (10 <= K && K < 60){
        cout << "21:" << K << endl;
    } else if (K >= 60 && (K % 60) < 10){
        cout << "22:0" << K % 60 << endl;
    } else if (K >= 60 && 10 <= (K % 60)){
        cout << "22:" << K % 60 << endl;
    }

    return 0;
}