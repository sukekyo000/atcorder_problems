#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int h,w,x[2],y[2],count=0;

    cin >> h >> w;

    string s[h];

    for(int i = 0; i < h; i++){
        cin >> s[i];
    }

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(s[i][j] == 'o'){
                x[count] = j;
                y[count] = i;
                count++;
            }
        }
    }

    cout << fabs(x[0] - x[1]) + fabs(y[0] - y[1]) << endl;

    return 0;
}