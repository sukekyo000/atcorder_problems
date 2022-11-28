#include <iostream>
using namespace std;

int main() {
  int H, W, R, C, sum = 0;

  cin >> H >> W >> R >> C;

  if(H == 1 && W == 1){
    sum = 0;

  } else if (H == 1){
    if(C == 1 || C == W){
      sum += 1;
    } else {
      sum += 2;
    }
  } else if (W == 1){
    if(R == 1 || R == H){
      sum += 1;
    } else {
      sum += 2;
    }
  } else {
    if(C == 1 || C == W){
      sum += 1;
    } else {
      sum += 2;
    }
    if(R == 1 || R == H){
      sum += 1;
    } else {
      sum += 2;
    }
  }

  

  cout << sum << endl;

  return 0;
}