#include <iostream>
using namespace std;

int main() {
    double V, T, S, D;

    cin >> V >> T >> S >> D;
    
    if((double(T) <= double(D / V)) && (double(D / V) <= double(S))){
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }

    return 0;
}