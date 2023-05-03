#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string s;

void func(int l, int r){
	if(r == l + 1)
        return;

	int k = (r - l) / 3;
	for(int i = l + k; i < r - k; i++){
		s[i] = ' ';
	}
	func(l, l + k);
	func(r - k, r);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

	int n;
	while(cin >> n){
		int len = pow(3, n);
		s.append(len, '-');
		func(0, len);
		cout << s << '\n';
		s.clear();
	}
	return 0;
}