#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set<string> s;
    int n, m, cnt = 0;
    string k;

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> k;
        s.insert(k);
    }

    for(int i = 0; i < m; i++){
        cin >> k;
        auto iter = s.find(k);
        if(iter != s.end()) cnt++;
    }

    cout << cnt << endl;
    return 0;
}