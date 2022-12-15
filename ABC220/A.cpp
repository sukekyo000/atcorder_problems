#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, count = 0;

    cin >> A >> B >> C;

    for(int i = A; i <= B; i++){
        if(i % C == 0){
            cout << i << endl;
            count++;
            break;
        }
    }

    if(count == 0){
        cout << -1 << endl;
    }

    return 0;
}