#include <iostream>
using namespace std;

int main() {
    int N, two_fact = 1;

    cin >> N;

    for(int i = 0; i < N; i++){
        two_fact *= 2;
    }

    cout << two_fact << endl;

    return 0;
}