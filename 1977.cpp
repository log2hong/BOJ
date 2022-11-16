#include <iostream>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;

    int ans = 0, min = 0;
    for(int i = 1; i<=100; i++){
        if(i * i >= m && i * i <= n){
            ans += i * i;
            if(min == 0) min = i * i;
        }
    }

    if(ans == 0) cout << -1 << endl;
    else cout << ans << endl << min << endl;

    return 0;
}