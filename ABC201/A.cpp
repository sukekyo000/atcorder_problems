#include <bits/stdc++.h>
using namespace std;

int main() {
    int A[3];

    cin >> A[0] >> A[1] >> A[2];

    sort(A, A + 3);
    
    if((A[0] - A[1]) == (A[1] - A[2])){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}