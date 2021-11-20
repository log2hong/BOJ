#include <iostream>
using namespace std;

int main(){
    int a, b, v;
    cin >> a >> b >> v;
    int ans = 1;
    ans += (v - a) / (a - b);
    if((v - a) % (a - b) != 0) ans += 1;
    
    if(a >= v) cout << "1" << endl;
    else cout << ans << endl;

    return 0;
}
