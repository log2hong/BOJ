#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<int> v;

void backtracking(int depth, int st){
    if(depth == m){
        for(auto it = v.begin(); it != v.end(); it++){
            cout << *it << " ";
        }
        cout << '\n';
        return;
    }
    for(int i = st; i <= n; i++){
        v.push_back(i);
        backtracking(depth + 1, i);
        v.pop_back();
    }
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    backtracking(0, 1);
    return 0;
}