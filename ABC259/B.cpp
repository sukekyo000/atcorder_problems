#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
  double a,b,d,r,ans_angle,x,y,pi=acos(-1);

  cin>>a>>b>>d;

  r = sqrt(pow(a,2) + pow(b,2));

  ans_angle = atan2(b,a) + d/180.*pi;

  x  = cos(ans_angle) * r;
  y  = sin(ans_angle) * r;

  cout<< fixed << setprecision(7) << x << " " << fixed << setprecision(7) << y <<endl;
  return 0;
}