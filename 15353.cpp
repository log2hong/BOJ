#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string a, b, ans;
    cin >> a >> b;

    int sum = 0;
    while(!a.empty() || !b.empty() || sum){
        if(!a.empty()) sum += a.back() - '0', a.pop_back();
        if(!b.empty()) sum += b.back() - '0', b.pop_back();
        ans.push_back((sum % 10) + '0');
        sum /= 10;
    }
    reverse(ans.begin(), ans.end());

    cout << ans << endl;
    return 0;
}