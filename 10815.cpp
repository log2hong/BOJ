#include <iostream>
#include <set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set<int> s;
    int n, m, k;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> k;
        s.insert(k);
    }

    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> k;
        auto iter = s.find(k);
        if(iter == s.end()) cout << "0 ";
        else cout << "1 ";
    }

    return 0;
}