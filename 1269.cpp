#include <iostream>
#include <set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set<int> s;
    int n, m, k;

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> k;
        s.insert(k);    
    }
    for(int i = 0; i < m; i++){
        cin >> k;
        if(s.find(k) != s.end()) s.erase(k);
        else s.insert(k);
    }

    cout << s.size() << '\n';

    return 0;
}