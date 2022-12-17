#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double A, B;

    cin >> A >> B;
    
    cout << fixed << setprecision(10) << double((A - B) / 3) + double(B) << endl;
    return 0;
}