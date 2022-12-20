#include <iostream>
using namespace std;

int main() {
    char C[3];

    cin >> C[0] >> C[1] >> C[2];
    
    if(C[0] == C[1] && C[1] == C[2]){
        cout << "Won" << endl;
    } else {
        cout << "Lost" << endl;
    }
    return 0;
}