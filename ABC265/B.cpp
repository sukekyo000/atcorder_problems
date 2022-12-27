#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, roomNum = 0;
    long long T;
    bool check = true;

    cin >> N >> M >> T;

    int A[N - 1], X[M], Y[M];

    for(int i = 0; i < N - 1; i++){
        cin >> A[i];
    }

    for(int i = 0; i < M; i++){
        cin >> X[i];
        cin >> Y[i];
    }

    int i = 0;

    while(0 <= T){
        T = T - A[i];
        
        if((i + 1) == X[roomNum]){
            T = T + Y[roomNum];
            roomNum++;
        }

        if(T <= 0){
            check = false;
            break;
        }

        i++;
        if(i + 1 == N){
            break;
        }
    }

    if(check == true){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}