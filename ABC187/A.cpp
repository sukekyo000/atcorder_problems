#include <iostream>
using namespace std;

int S(int a, int b, int c){
    return a + b + c;
} 

int main() {
    string A, B;
    
    cin >> A >> B;

    if(S(int(A[0] - 48), int(A[1] - 48), int(A[2] - 48)) > S(int(B[0] - 48), int(B[1] - 48), int(B[2] - 48))){
        cout << S(int(A[0] - 48), int(A[1] - 48), int(A[2] - 48)) << endl;
    } else if (S(int(A[0] - 48), int(A[1] - 48), int(A[2] - 48)) < S(int(B[0] - 48), int(B[1] - 48), int(B[2] - 48))){
        cout << S(int(B[0] - 48), int(B[1] - 48), int(B[2] - 48)) << endl;
    } else {
        cout << S(int(A[0] - 48), int(A[1] - 48), int(A[2] - 48)) << endl;
    }

    return 0;
}