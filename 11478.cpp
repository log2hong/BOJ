#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
    set<string> s;
    string str;
    
    cin >> str;
    for(int i = 0; i < str.size(); i++){
        for(int j = 1; j <= str.size() - i; j++){
            s.insert(str.substr(i, j));
        }
    }
    cout << s.size() << endl;

    return 0;
}