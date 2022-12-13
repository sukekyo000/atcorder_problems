#include <iostream>
using namespace std;

int main() {
    int N;

    cin >> N;

    if(N >= 42){
        cout << "AGC" << 0 << N + 1 << endl;
    } else if (N < 10) {
        cout << "AGC" << "00" << N << endl;
    } else {
        cout << "AGC" << 0 << N << endl;
    }


    return 0;
}