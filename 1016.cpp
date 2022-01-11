#include <iostream>
using namespace std;

int checked[1000001];

int main(){
	int ans;
	long long int min, max;
	scanf("%lld %lld", &min, &max);

	for (long long int i = 2; i * i <= max; i++){
		long long int temp = i * i - min % (i * i);
		if (temp == i * i) temp = 0;
		for (long long int k = temp; k <= max - min; k += i * i)
			checked[k] = 1;
	}
	ans = 0;
	for (int i = 0; i <= max - min;i++)
		ans += !checked[i];
	cout << ans << endl;
	return 0;
}
