#include <iostream>
using namespace std;

int main() {
    int N;
    bool check = true;

    cin >> N;

    char A[N][N];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> A[i][j];
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(A[i][j] == 'W' && A[j][i] != 'L'){
                check = false;
            } else if (A[i][j] == 'L' && A[j][i] != 'W'){
                check = false;
            } else if (A[i][j] == 'D' && A[j][i] != 'D'){
                check = false;
            }
        }
    }

    if(check == true){
        cout << "correct" << endl;
    } else {
        cout << "incorrect" << endl;
    }


    return 0;
}