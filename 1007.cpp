#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
	cout << fixed << setprecision(7);
	int tc;
    cin >> tc;
	while (tc--){
		int n;
        cin >> n;
		vector<pair<int, int> > v(n);
		for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
		vector<int> arr(n);
		fill(arr.begin() + n / 2, arr.end(), 1);
		double ans = 1e9;
		do{
			double x = 0, y = 0;
			for (int i = 0; i < n; i++) {
				if (arr[i]) x += v[i].first, y += v[i].second;
				else x -= v[i].first, y -= v[i].second;
			}
			ans = min(ans, hypot(x, y));
		} while (next_permutation(arr.begin(), arr.end()));
		cout << ans << endl;
	}
    return 0;
}
