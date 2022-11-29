#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int N;

    cin >> N;

    if(pow(2, N) > pow(N, 2)){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}