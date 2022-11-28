#include <iostream>
using namespace std;

int main() {
    int x[3], y[3], out_x, out_y;

    for(int i = 0; i < 3; i++){
        cin >> x[i] >> y[i];
    }

    if(x[0] == x[1]){
        out_x = x[2];
    } else if(x[1] == x[2]){
        out_x = x[0];
    } else if(y[0] == y[2]){
        out_x = x[1];
    }
    
    if(y[0] == y[1]){
        out_y = y[2];
    } else if(y[1] == y[2]){
        out_y = y[0];
    } else if(y[0] == y[2]){
        out_y = y[1];
    }

    cout << out_x << " " << out_y << endl;

    return 0;
}