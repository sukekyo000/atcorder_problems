#include <iostream>
using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    if(a + 1 == b || a == b + 1 || (a + b == 11)){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}