#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set<string> s1, s2;
    int n, m;
    string k;

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> k;
        s1.insert(k);    
    }
    for(int i = 0; i < m; i++){
        cin >> k;
        if(s1.find(k) != s1.end()) s2.insert(k);
    }

    cout << s2.size() << '\n';
    for(auto i: s2){
        cout << i << '\n';
    }

    return 0;
}