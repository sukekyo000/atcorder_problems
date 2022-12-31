#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K, Q;

    cin >> N >> K >> Q;
    
    int A[K], L[Q];

    for(int i = 0; i < K; i++){
        cin >>  A[i];
    }

    for(int i = 0; i < Q; i++){
        cin >>  L[i];
    }

    for(int i = 0; i < Q; i++){
        if(A[L[i] - 1] == N){
            continue;
        } else {
            bool check = true;
            for(int j = 0; j < K; j++){
                if(A[L[i] - 1] + 1 == A[j]){
                    check = false;
                }
            }
            if(check == true){
                A[L[i] - 1]++;
            }
        }
    }

    for(int i = 0; i < K; i++){
        cout << A[i] << " ";
    }

    cout << endl;

    return 0;
}