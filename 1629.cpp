#include<iostream>
using namespace std;

int mul(int a, int b, int c){
	if(b == 0) return 1;
	else if(b == 1) return a % c;
	else if(b % 2 == 0){
		int ans = mul(a, b / 2, c);
		return ((long long)ans * (long long)ans) % c;
	}
	else{
		return ((long long)a * (long long)mul(a, b - 1, c)) % c;
	}
}

int main(){
    int a, p, d;
	cin >> a >> p >> d;
	cout<< mul(a, p, d) << endl;
}