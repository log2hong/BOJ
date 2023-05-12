#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<pair<int, int> > v(n + 1, {0, 0});

    for(int i = 1; i <= n; i++){
        cin >> v[i].first;
        cin >> v[i].second;
    }

    vector<vector<int> > dp(v.size(), vector<int>(k + 1));
    for(int i = 0; i <= k; i++){
        dp[0][i] = 0;
    }

    for(int i = 1; i < v.size(); i++){
        for(int j = 0; j < v[i].first; j++){ 
            dp[i][j] = dp[i - 1][j];
        }
        for(int j = v[i].first; j <= k; j++){  
            dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - v[i].first] + v[i].second);
        }
    }

    cout << dp[n][k] << endl;
    return 0;
}