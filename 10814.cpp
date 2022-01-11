#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b){
    return a.first < b.first;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<pair<int, string> > v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }
    stable_sort(v.begin(), v.end(), compare);

    for(int i = 0; i < n; i++){
        cout << v[i].first << " " << v[i].second << "\n";
    }
    return 0;
}
