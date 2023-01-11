#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    int small_check = false, big_check = false;

    cin >> s;

    int first_str_num = s.size();

    for(int i = 0; i < first_str_num; i++){
        if(islower(s[i])){
            small_check = true;
        } else if (isupper(s[i])){
            big_check = true;
        }
    }

    
    sort(s.begin(), s.end());

    s.erase(std::unique(s.begin(), s.end()), s.end());
    
    int final_str_num = s.size();

    if(small_check && big_check && first_str_num == final_str_num){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}