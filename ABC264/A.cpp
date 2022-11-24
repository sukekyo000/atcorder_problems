#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string atcoder = "atcoder";
    int L, R, i;

    cin >> L >> R;

    for(i = L; i <= R; i++){
        cout << atcoder[i - 1];
    }

    cout << endl;

    return 0;
}