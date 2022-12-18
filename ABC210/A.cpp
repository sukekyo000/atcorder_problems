#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A, X, Y;

    cin >> N >> A >> X >> Y;

    if(A < N){
        cout << (A * X) + ((N - A) * Y) << endl;
    } else {
        cout << N * X << endl;
    }

    return 0;
}