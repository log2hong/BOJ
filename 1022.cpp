#include <iostream>
using namespace std;

const int dx[4] = { 0, -1, 0, 1 };
const int dy[4] = { -1, 0, 1, 0 };

int main(){
	int r1, c1, r2, c2;
	cin >> r1 >> c1 >> r2 >> c2;

	int arr[50][5];
	for (int i = 0; i <= (r2 - r1); i++){
		for (int j = 0; j <= (c2 - c1); j++) {
			arr[i][j] = 0;
		}
    }

	int x = 0, y = 0, dir = 3;
	int cnt = 0, n = 1, temp = 1;

	while (!arr[r2 - r1][0] || !arr[0][0] || !arr[0][c2 - c1] || !arr[r2 - r1][c2 - c1]) {
		if (y - r1 >= 0 && y - r1 <= (r2 - r1) && x - c1 >= 0 && x - c1 <= (c2 - c1)) {
			arr[y - r1][x - c1] = n;
		}

		cnt++; n++;
		x = x + dx[dir]; y = y + dy[dir];

		if (cnt == temp) {
			dir = (dir + 1) % 4;
			if (dir == 1 || dir == 3) temp++;
			cnt = 0;
		}
	}

	cnt = 0;
	while(n) {
		n /= 10;
		cnt += 1;
	}

	for (int i = 0; i <= (r2 - r1); i++) {
		for (int j = 0; j <= (c2 - c1); j++) {
			printf("%*d ", cnt, arr[i][j]);
		}
		cout << endl;
	}

	return 0;
}