    #include <iostream>
    using namespace std;

    int main() {
        int L[3], R[3];

        cin >> L[1] >> R[1] >> L[2] >> R[2];

        if(L[1] < L[2]){
            if(L[2] < R[1] && R[1] > R[2]){
                cout << R[2] - L[2] << endl;
            } else if (L[2] < R[1]){
                cout << R[1] - L[2] << endl;
            } else {
                cout << 0 << endl;
            }
        } else if (L[2] < L[1]){
            if(L[1] < R[2] && R[2] > R[1]){
                cout << R[1] - L[1] << endl;
            } else if (L[1] < R[2]){
                cout << R[2] - L[1] << endl;
            } else {
                cout << 0 << endl;
            }
        } else {    
            if(R[1] < R[2]){
                cout << R[1] - L[1] << endl;
            } else if(R[1] > R[2]){
                cout << R[2] - L[1] << endl;
            } else {
                cout << R[1] - L[1] << endl;
            }
        }

        return 0;
    }