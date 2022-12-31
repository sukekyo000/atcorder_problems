#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X, Y, Z, passNumCount = 0, i, j;

    cin >> N >> X >> Y >> Z;

    int A[N], B[N], passNum[N];

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    
    for(int i = 0; i < N; i++){
        cin >> B[i];
    }

    for(i = 0; i < X; i++){
        int tempMax = A[0];
        int tempPassNum = 0;
        for(j = 0; j < N; j++){
            if(A[j] > tempMax && j != N){
                tempMax = A[j];
                tempPassNum = j;
            }
        }
        passNum[passNumCount] = tempPassNum;
        passNumCount++;
        A[tempPassNum] = -1;
        B[tempPassNum] = -1;
    }
    
    for(i = 0; i < Y; i++){
        int tempMax = B[0];
        int tempPassNum = 0;
        for(j = 0; j < N; j++){
            if(B[j] > tempMax && j != N){
                tempMax = B[j];
                tempPassNum = j;
            }
        }
        passNum[passNumCount] = tempPassNum;
        passNumCount++;
        A[tempPassNum] = -1;
        B[tempPassNum] = -1;
    }
    
    for(i = 0; i < Z; i++){
        int tempMax = A[0] + B[0];
        int tempPassNum = 0;
        for(j = 0; j < N; j++){
            if(A[j] + B[j] > tempMax && j != N){
                tempMax = A[j] + B[j];
                tempPassNum = j;
            }
        }
        passNum[passNumCount] = tempPassNum;
        passNumCount++;
        A[tempPassNum] = -1;
        B[tempPassNum] = -1;
    }
    
    sort(passNum, passNum + passNumCount);
    
    for(int i = 0; i < passNumCount; i++){
        cout << passNum[i] + 1 << endl;
    }

    return 0;
}