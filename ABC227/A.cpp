#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++)

int main() {
    int n,k,a,temp;
    cin>>n>>k>>a;
    temp=k%n;
    if((temp+a-1)%n==0){
        cout<<n<<endl;
    }else{
        cout<<(temp+a-1)%n<<endl;
    }
    return 0;
}