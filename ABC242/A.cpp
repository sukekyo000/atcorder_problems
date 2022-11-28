#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double probability, A, B, C, X;
    
    cin >> A >> B >> C >> X;
    
    if(X <= A){
        cout << 1.000000000000 << endl;
    } else if (A < X && X <= B){
        probability =  C / (B - A);
        cout << fixed << setprecision(15) << probability << endl;
    } else {
        cout << 0.000000000000 << endl;
    }


    return 0;
}