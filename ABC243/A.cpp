#include <iostream>
using namespace std;

int main() {
    int V, A, B, C;
    
    cin >> V >> A >> B >> C;

    if ((V % (A + B + C) - A) < 0){
        cout << "F" << endl;
    } else if((V % (A + B + C) - (A + B)) < 0){
        cout << "M" << endl;
    } else if((V % (A + B + C) - (A + B + C)) < 0){
        cout << "T" << endl;
    }

    return 0;
}