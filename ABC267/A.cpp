#include <iostream>
using namespace std;

int main() {
    string week;

    cin >> week;

    if(week == "Monday"){
        cout << 5 << endl;
    } else if(week == "Tuesday"){
        cout << 4 << endl;
    } else if(week == "Wednesday"){
        cout << 3 << endl;
    } else if(week == "Thursday"){
        cout << 2 << endl;
    } else if(week == "Friday"){
        cout << 1 << endl;
    }

    return 0;
}