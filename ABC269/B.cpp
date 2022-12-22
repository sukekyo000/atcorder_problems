#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++)
bool is_integer( long double x ){
  return std::floor(x)==x;
}

int main() {
    string s[11];
    int x_first;
    int x_end;
    int y_first;
    int y_end;
    rep(i,10){
        cin >> s[i];
    }
    rep(i,10){
        rep(j,10){
            if(s[i][j] == '#' && s[i][j-1] != '#'){
                x_first = j+1;
            }
            if(j == 9){
                if(s[i][j] == '#'){
                    x_end = 10;
                }
            } else {
                if(s[i][j] == '#' && s[i][j+1] != '#'){
                    x_end = j+1;
                }
            }
            if(i==0){
                if(s[i][j]=='#'){
                    y_first=1;
                }
            } else {
                if(s[i][j] == '#' && s[i-1][j] != '#'){
                    y_first = i+1;
                }
            }
            if(i == 9){
                if(s[i][j] == '#'){
                    y_end = 10;
                }
            } else {
                if(s[i][j] == '#' && s[i+1][j] != '#'){
                    y_end = i+1;
                }
            }
        }
    }
    cout << y_first << " " << y_end << endl;
    cout << x_first << " " << x_end << endl;
    return 0;
}