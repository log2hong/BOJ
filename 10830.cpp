#include <iostream>
using namespace std;

const int DIV = 1000;

int n;
int arr[5][5], ans[5][5], temp[5][5];

void matrix_mul(int a[][5], int b[][5]){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			for (int t = 0; t < n; t++){
				temp[i][j] += (a[i][t] * b[t][j]) % DIV;
				temp[i][j] %= DIV;
			}
		}
    }

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			b[i][j] = temp[i][j];
			temp[i][j] = 0;
		}
    }
}

void matrix_power(long long b) {
	while(b > 0){		
		if(b % 2) matrix_mul(arr, ans);
		matrix_mul(arr, arr);
		b /= 2;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long b;
	cin >> n >> b;
	
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
            ans[i][j] = arr[i][j] % DIV;
        }
    }

	matrix_power(b - 1);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
            cout << ans[i][j] << ' ';
    	}
        cout << '\n';
	}

	return 0;
}