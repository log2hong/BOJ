#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_N = 8;
int arr[MAX_N], ans[MAX_N];
int n, m;

void func(int depth, int max_idx){
    if(depth == m){
        for(int i = 0; i < m; i++){
            cout << ans[i] << " ";
        }
        cout << '\n';
        return;
    }
    for(int i = max_idx; i < n; i++){
        ans[depth] = arr[i];
        func(depth + 1, i);
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    func(0, 0);
    return 0;
}