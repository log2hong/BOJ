#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int s, n, k, r1, r2, c1, c2;

int fractal(int l, int x, int y) {
	if (l == 1) return 0;
	else if ((x >= (l / n) * (n - k) / 2) && (x < (l / n) * (n + k) / 2) && (y >= (l / n) * (n - k) / 2) && (y < (l / n) * (n + k) / 2)) return 1;
	else return fractal(l / n, x % (l / n), y % (l / n));
}

int main() {
	cin >> s >> n >> k >> r1 >> r2 >> c1 >> c2;
	if (s == 0) {
		cout << 0;
	}
	else {
        for (int i = r1; i <= r2; i++) {
            for (int j = c1; j <= c2; j++) {
                cout << fractal(pow(n, s), i, j);
            }
            cout << endl;
        }
    }
    return 0;
}