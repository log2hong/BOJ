#include <iostream>
using namespace std;

const int MAX_N = 500;
int arr[MAX_N][MAX_N];
int dp[MAX_N][MAX_N];

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cin >> arr[i][j];
        }
    }
    dp[0][0] = arr[0][0];
    for(int i = 1; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(j == 0) dp[i][j] = arr[i][j] + dp[i - 1][j];
            else if(j == i) dp[i][j] = arr[i][j] + dp[i - 1][j - 1];
            else dp[i][j] = arr[i][j] + max(dp[i - 1][j - 1], dp[i - 1][j]);
        }
    }
    
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans = max(ans, dp[n - 1][i]);
    }
    cout << ans << endl;
    return 0;
}