#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main() {
    int num[5] = {}, count = 0, i;
    
    for(i = 0; i < 5; i++){
        cin >> num[i];
    }

    sort(begin(num), end(num));

    for(i = 0; i < 4; i++){
        if(num[i] == num[i + 1]){
            count++;
        }
    }
    
    cout << 5 - count << endl;

    return 0;
}