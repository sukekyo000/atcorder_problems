#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    double H, con = 12800000;

    cin >> H;

    cout << fixed << setprecision(9) << sqrt(H * (con + H)) << endl;

    return 0;
}