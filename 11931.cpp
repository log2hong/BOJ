#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, tmp;
    vector<int> v;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end(), greater<int>());
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *it << '\n';
    }
    return 0;
}