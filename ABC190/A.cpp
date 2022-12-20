#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    bool judge = true;

    cin >> A >> B >> C;
    
    if(C == 0){
        while(A >= 0 && B >= 0){
            A--;
            if(A < 0){
                break;
            }
            B--;
        }
        if(A < 0){
            cout << "Aoki" << endl;
        } else {
            cout << "Takahashi" << endl;
        }
        // for(int i = 0; i < A + B + 4; i++){
        //     A--;
        //     if(A == -1){
        //         cout << "Aoki" << endl;
        //         break;
        //     }
        //     B--;
        //     if(B == -1){
        //         cout << "Takahashi" << endl;
        //         break;
        //     }
        // }
    } else {
        while(A >= 0 && B >= 0){
            B--;
            if(B < 0){
                break;
            }
            A--;
        }
        if(A < 0){
            cout << "Aoki" << endl;
        } else {
            cout << "Takahashi" << endl;
        }
    }

    return 0;
}