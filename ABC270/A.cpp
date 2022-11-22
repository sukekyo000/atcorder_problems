#include <iostream>
using namespace std;

int main() {
    int test[2], i, out_num;
    bool one = false, two = false, four = false;
    
    for(i = 0; i < 2; i++){
        cin >> test[i];
    }

    for(i = 0; i < 2; i++){
        if(test[i] == 1){
            one = true;
        } else if (test[i] == 2){
            two = true;
        } else if (test[i] == 3){
            one = true;
            two = true;
        } else if (test[i] == 4){
            four = true;
        } else if (test[i] == 5){
            one = true;
            four = true;
        } else if (test[i] == 6){
            two = true;
            four = true;
        } else if (test[i] == 7){
            one = true;
            two = true;
            four = true;
        }
    }


    if(one == true && two == true && four == true){
        cout << 7 << endl;
    } else if (two == true && four == true){
        cout << 6 << endl;
    } else if (one == true && four == true){
        cout << 5 << endl;
    } else if (four == true){
        cout << 4 << endl;
    } else if (one == true && two == true){
        cout << 3 << endl;
    } else if (two == true){
        cout << 2 << endl;
    } else if (one == true){
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}