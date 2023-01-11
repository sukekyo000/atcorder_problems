#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    double dis;

    dis = sqrt(a*a + b*b);

    cout << fixed << setprecision(15) << a / dis << " " << fixed << setprecision(15) << b / dis << endl; 

    return 0;
}