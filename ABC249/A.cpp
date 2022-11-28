#include <iostream>
using namespace std;

int main() {
    int A, B, C, D, E, F, X, a_l = 0, t_l = 0, a_s = 0, t_s = 0, a_c = 0, t_c = 0;

    cin >> A >> B >> C >> D >> E >> F >> X;

    t_c = X / (A + C);
    
    if((X % (A + C)) < A){
        t_l = ((t_c * A) + (X % (A + C))) * B;
    } else if ((X % (A + C)) >= A){
        t_l = ((t_c * A) + A) * B;
    }
    
    a_c = X / (D + F);
    
    if((X % (D + F)) < D){
        a_l = ((a_c * D) + (X % (D + F))) * E;
    } else if ((X % (D + F)) >= D){
        a_l = ((a_c * D) + D) * E;
    }

    if(t_l > a_l){
        cout << "Takahashi" << endl;
    } else if (t_l < a_l){
        cout << "Aoki" << endl;
    } else if (t_l == a_l){
        cout << "Draw" << endl;
    }

    return 0;
}