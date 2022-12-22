#include <iostream>
using namespace std;

int main() {
    long long int N;

    cin >> N;

    if(0 < N){
        cout << N % 998244353 << endl;
    } else if (N < 0){
        if(-N % 998244353 == 0){
            cout << 0 << endl;
        } else {
            cout << 998244353 - (-N % 998244353) << endl;
        }
    } else if (N == 0){
        cout << 0 << endl;
    }

    return 0;
}