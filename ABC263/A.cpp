#include <iostream>
using namespace std;

int main() {
    int A, B, C, D, E;

    scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

    if(A == B && B == C && D == E){
        printf("%s\n", "Yes");
    } else if (A == B && B == D && C == E){
        printf("%s\n", "Yes");
    } else if (A == B && B == E && C == D){
        printf("%s\n", "Yes");
    } else if (A == C && C == D && B == E){
        printf("%s\n", "Yes");
    } else if (A == C && C == E && B == D){
        printf("%s\n", "Yes");
    } else if (A == D && D == E && B == C){
        printf("%s\n", "Yes");
    } else if (B == C && C == D && A == E){
        printf("%s\n", "Yes");
    } else if (B == C && C == E && A == D){
        printf("%s\n", "Yes");
    } else if (B == D && D == E && A == C){
        printf("%s\n", "Yes");
    } else if (C == D && D == E && A == B){
        printf("%s\n", "Yes");
    } else {
        printf("%s\n", "No");
    }

    return 0;
}