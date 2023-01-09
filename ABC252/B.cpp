#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,k,max;
    bool check = false;

    cin >> n >> k;

    int a[n], b[k];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < k; i++){
        cin >> b[i];
    }

    max = *std::max_element(a, a + n);

    for(int i = 0; i < n; i++){
        if(max == a[i]){
            for(int j = 0; j < k; j++){
                if(i+1 == b[j]){
                    check = true;
                }
            }
        }
    }

    if(check == true){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;  
}