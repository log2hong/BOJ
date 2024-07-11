#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int ans = 1 - n;
    while(n--){
        int a;
        cin >> a;
        ans += a;
    }

    cout << ans << endl;
    return 0;
}