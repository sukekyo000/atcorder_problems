#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
    int X, Y, Z;
    
    cin >> X >> Y >> Z;

    if ((0 < X && 0 > Y) || (0 > X && 0 < Y) || (0 < X && 0 < Y && X < Y) || (0 > X && 0 > Y && X > Y)){
        cout << abs(X) << endl;
    } else if ((0 < X && 0 < Y && Y < X && 0 < Z && Z < Y) || (0 > X && 0 > Y && Y > X && 0 > Z && Z > Y)){
        cout << abs(X) << endl;
    } else if ((0 < X && 0 < Y && Y < X && 0 > Z) || (0 > X && 0 > Y && Y > X && 0 < Z)) {
        cout << abs(X) + (abs(Z) * 2) << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}