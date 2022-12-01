#include <iostream>
using namespace std;

int main() {
    int t;

    cin >> t;

    cout << ((((t * t + 2 * t + 3) + t) * ((t * t + 2 * t + 3) + t) + 2 * ((t * t + 2 * t + 3) + t) + 3) + ((t * t + 2 * t + 3) * (t * t + 2 * t + 3) + (t * t + 2 * t + 3) * 2 + 3)) * ((((t * t + 2 * t + 3) + t) * ((t * t + 2 * t + 3) + t) + 2 * ((t * t + 2 * t + 3) + t) + 3) + ((t * t + 2 * t + 3) * (t * t + 2 * t + 3) + (t * t + 2 * t + 3) * 2 + 3)) + 2 * ((((t * t + 2 * t + 3) + t) * ((t * t + 2 * t + 3) + t) + 2 * ((t * t + 2 * t + 3) + t) + 3) + ((t * t + 2 * t + 3) * (t * t + 2 * t + 3) + (t * t + 2 * t + 3) * 2 + 3)) + 3 << endl;

    return 0;
}