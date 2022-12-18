#include <bits/stdc++.h>
using namespace std;

int main() {
    int N[3];

    cin >> N[0] >> N[1] >> N[2];

    sort(N, N + 3);
    
    if(N[0] == N[1]){
        cout << N[2] << endl;
    } else if (N[1] == N[2]){
        cout << N[0] << endl;
    } else if (N[0] != N[1] && N[1] != N[2] && N[2] != N[0]){
        cout << 0 << endl;
    }

    return 0;
}