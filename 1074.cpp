#include <iostream>
using namespace std;

int main(){
	int n, r, c;
    cin >> n >> r >> c;

    int ans = 0;
    while(n){
        int s = 1 << (n - 1);
        int f;
        if(r < s && c < s) f = 0;
        else if(r < s && c >= s) f = 1;
        else if(r >= s && c < s) f = 2;
        else f = 3;

        r %= s;
        c %= s;
        ans += s * s * f;
        n--;
    }
    cout << ans << endl;
	return 0;
}
