#include <iostream>
using namespace std;

int main() {

    int a, b, c;

    cin >> a >> b >> c;

    if(a != b && b != c && a != c){
        if((a < b && b < c) || (a > b && b > c)){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else if ((a == b && a != c) || (b == c && a != b)){
        cout << "Yes" << endl;
    } else if (a == c && a != b){
        cout << "No" << endl;
    } else if (a == b && b == c){
        cout << "Yes" << endl;
    }

    return 0;
}