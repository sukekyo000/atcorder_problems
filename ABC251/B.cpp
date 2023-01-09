#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n,w;

    cin >> n >> w;

    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    vector<int> temp;
    vector<int> under_w;

    for(int i = 0; i < n; i++){
        temp.push_back(a[i]);
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 1 + i; j < n; j++){
            temp.push_back(a[i]+a[j]);
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 1 + i; j < n; j++){
            for(int k = 1 + j; k < n; k++){
                temp.push_back(a[i]+a[j]+a[k]);
            }
        }
    }
    
    std::sort(temp.begin(), temp.end());
    
    temp.erase(std::unique(temp.begin(), temp.end()), temp.end());
    
    for(int i = 0; i < temp.size(); i++){
        if(temp[i] <= w){
            under_w.push_back(temp[i]);
        }
    }

    cout << under_w.size() << endl;

    return 0;
}