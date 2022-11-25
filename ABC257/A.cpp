#include <iostream>
using namespace std;

int main() {
    int N, X, i, j, count = 0;
    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    cin >> N >> X;

    char out_alpha[2600];

    for(i = 0; i < 26; i++){
        for(j = 0; j < N; j++){
            out_alpha[count] = alpha[i];
            count++;
        }
    }
    cout << out_alpha[X - 1] << endl;

    return 0;
}