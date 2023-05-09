#include <iostream>
using namespace std;

int dp[101][11];
 
int main(){
    int n;
    cin >> n;
 
    for (int i = 1; i <= 9; i++){
        dp[1][i] = 1;
    }
 
    for (int i = 2; i <= n; i++){
        for (int j = 0; j <= 9; j++){
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
        }
    }

    long long int ans = 0;
    for (int i = 0; i <= 9; i++) 
        ans += dp[n][i];
 
    cout <<  ans % 1000000000;
    return 0;
}