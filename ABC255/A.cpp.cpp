#include <iostream>
using namespace std;

int main() {
    int R, C, A[3][3];

    cin >> R >> C >> A[1][1] >> A[1][2] >> A[2][1] >> A[2][2];

    cout << A[R][C] << endl;

    return 0;
}