#include <bits/stdc++.h>
using namespace std;

int main() {
    double N;

    cin >> N;

    if(int(N * 1.08) < 206){
        cout << "Yay!" << endl;
    } else if (int(N * 1.08) == 206){
        cout << "so-so" << endl;
    } else {
        cout << ":(" << endl;
    }

    return 0;
}