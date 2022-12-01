#include <iostream>
using namespace std;

int main() {
    int X, Y;

    cin >> X >> Y;
    
    if(0 >= Y - X){
        cout << 0 << endl;
    } else if (((Y - X) % 10) == 0) {
        cout << ((Y - X) / 10) << endl;
    } else {
        cout << ((Y - X) / 10) + 1 << endl;
    }

    return 0;
}