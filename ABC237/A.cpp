#include <iostream>
#include <math.h>

using namespace std;

int main() {
    long long N, min, max;

    cin >> N;

    min = -pow(2, 31);
    max = pow(2, 31);

    if(min <= N && N < max){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}