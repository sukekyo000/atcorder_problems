#include <iostream>
using namespace std;

int main() {
    int X;

    cin >> X;

    if(X % 100 == 0){
        cout << 100 << endl;
    } else {
        cout << 100 - X % 100 << endl;
    }

    return 0;
}