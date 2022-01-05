#include <iostream>
using namespace std;

int main() {
	int n, ans;
	cin >> n;

	if(n == 4 | n == 7){
        ans = -1;
    }
    else {
        switch(n % 5){
            case 0:
                ans = n / 5;
                break;
            case 1:
                ans = (n - 6) / 5 + 2;
                break;
            case 2:
                ans = (n - 12) / 5 + 4;
                break;
            case 3:
                ans = (n - 3) / 5 + 1;
                break;
            case 4:
                ans = (n - 9) / 5 + 3;
                break;
        }
    }

    cout << ans << endl;
    return 0;
}