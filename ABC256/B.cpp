#include <iostream>
using namespace std;

int main() {
    int N, P = 0;

    cin >> N;

    int A[N], B[N] = {};

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    for(int i = 0; i < N; i++){
        for(int j = i - 0; j < N; j++){
            B[i] += A[j];
        }
    }

    for(int i = 0; i < N; i++){
        if(B[i] >= 4){
            P++;
        }
    }

    cout << P << endl;

    return 0;
}