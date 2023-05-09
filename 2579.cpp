#include <iostream>
using namespace std;

const int MAX_N = 300;
int arr[MAX_N + 1];
int dp[MAX_N + 1];

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    dp[0] = 0;
    dp[1] = arr[1];
    dp[2] = arr[1] + arr[2];

    for(int i = 3; i <= n; i++){
        dp[i] = max(dp[i - 2] + arr[i], dp[i - 3] + arr[i - 1] + arr[i]);
    }
    cout << dp[n] << endl;
    return 0;
}