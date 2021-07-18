#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    if(s1.compare(s2) < 0) cout << s2 << endl;
    else cout << s1 << endl;

    return 0;
}