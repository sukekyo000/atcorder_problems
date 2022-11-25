#include <iostream>
using namespace std;

int main() {
  string S;
  int i;

  cin >> S;

  if(S.length() == 1){
    for(i = 0; i < 6; i++){
        cout << S;
    }
  } else if(S.length() == 2){
    for(i = 0; i < 3; i++){
        cout << S;
    }
  } else if(S.length() == 3){
    for(i = 0; i < 2; i++){
        cout << S;
    }
  }

  cout << endl;

  return 0;
}