#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int X, Y, N;

    cin >> X >> Y >> N;

    if(X * 3 < Y){
        cout << X * N << endl;
    } else {
        cout << (N / 3 * Y) + (N % 3 * X) << endl;
    }

    return 0;
}