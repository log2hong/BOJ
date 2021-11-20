#include <iostream>
#include <string>
using namespace std;

int main() {
    int t, idx;
    string str;
    cin >> t;
    
    for (int i = 0; i < t; i++){
        cin >> idx >> str;
        for (int i = 0; i < str.size(); i++){
            if (i != idx - 1) cout << str[i];
        }
        cout << endl;
    }
    return 0;
}
