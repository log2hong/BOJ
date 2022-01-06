#include <iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    while(tc--){
        int a, b;
        cin >> a >> b;
        b = !(b % 4) ? 4 : b % 4;
        int ans = 1;
        while(b--) ans *= a;
        cout << (ans % 10 ? ans % 10 : 10) << endl;
    }
    return 0;
}