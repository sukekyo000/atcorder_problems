#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, energy = 1;

    cin >> A >> B;
    
    for(int i = 0; i < A - B; i++){
        energy *= 32;
    }

    cout << energy << endl;

    return 0;
}