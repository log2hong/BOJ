#include <iostream>
#include <limits.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int* dp = new int[n + 1];
    fill_n(dp, n + 1, 0);
    dp[1] = 1;

    for(int i = 2; i <= n; i++){
        int x = INT_MAX;
        for(int j = 1; j * j <= i; j++) x = min(x, dp[i - j * j]);
        dp[i] = x + 1;
    }
    cout << dp[n] << endl;
    delete[] dp;

    return 0;
}