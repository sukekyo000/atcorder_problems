#include <iostream>
using namespace std;

int main() {
  int n,a,b;

  cin >> n >> a >> b;


  for(int h = 0; h < n; h++){
    for(int i = 0; i < a; i++){
        for(int j = 0+h; j < n+h; j++){
            for(int k = 0; k < b; k++){
                if(j % 2 == 0){
                    cout << ".";
                } else {
                    cout << "#";
                }
            }
        }
        cout << endl;
    }
  }


  return 0;
}