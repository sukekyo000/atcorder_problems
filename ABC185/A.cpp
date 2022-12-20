#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A[4];
    
    cin >> A[0] >> A[1] >> A[2] >> A[3];

    cout << *std::min_element(A, A + 4) << endl;

    return 0;
}