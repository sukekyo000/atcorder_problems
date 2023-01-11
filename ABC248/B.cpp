#include <iostream>
using namespace std;

int main() {
    long long a,b,k,count=0;

    cin >> a >> b >> k;

    while(a < b){
        count++;
        a *= k;
    }

    cout << count << endl;

    return 0;
}