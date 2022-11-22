#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
    int R,C;

    cin >> R >> C;

    R = R - 8;
    C = C - 8;
    
    if(int(fabs(R)) % 2 == 0 && int(fabs(C)) % 2 == 0){
        cout << "white" << endl;
    } else if (int(fabs(R)) % 2 == 1 && int(fabs(C)) % 2 == 1){
        cout << "black" << endl;
    } else if (int(fabs(R)) % 2 == 0 && int(fabs(C)) % 2 == 1){
        if(fabs(R) > fabs(C)){
            cout << "white" << endl;
        } else if(fabs(R) < fabs(C)){
            cout << "black" << endl;
        }
    } else if (int(fabs(R)) % 2 == 1 && int(fabs(C)) % 2 == 0){
        if(fabs(R) > fabs(C)){
            cout << "black" << endl;
        } else if(fabs(R) < fabs(C)){
            cout << "white" << endl;
        }
    }

    return 0;
}