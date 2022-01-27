#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int ans = 0, m = 0;
	if(a == b && a == c) ans = 10000 + a * 1000;
	else if(a == b || a == c) ans = 1000 + a * 100;
	else if(b == c) ans = 1000 + b * 100;
	else{
		m = max(a, b);
		m = max(m, c);
		ans = m * 100;
	}

    cout << ans << endl;
	return 0;
}