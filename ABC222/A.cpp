#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;

    cin >> N;
    
    if(1000 <= N && N <= 9999){
        cout << N << endl;
    } else if (100 <= N && N <= 999) {
        cout << "0" << N << endl;
    } else if (10 <= N && N <= 99) {
        cout << "00" << N << endl;
    } else {
        cout << "000" << N << endl;
    }

    return 0;
}