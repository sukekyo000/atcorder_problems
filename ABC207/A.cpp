#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int N[3];

    for(int i = 0; i < 3; i++){
        cin >> N[i];
    }

    sort(N, N+3, std::greater<int>());
    
    cout << N[0] + N[1] << endl;

    return 0;
}