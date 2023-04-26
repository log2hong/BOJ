#include <iostream>
#include <map>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<int, int> Map;
    int n, m, k;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> k;
        auto iter = Map.find(k);
        if(iter == Map.end())
            Map.insert(make_pair(k, 1));
        else iter->second++;
    }

    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> k;
        auto iter = Map.find(k);
        if(iter == Map.end()) cout << "0 ";
        else cout << iter->second << " ";
    }

    return 0;
}