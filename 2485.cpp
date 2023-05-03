#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b){
    return b ? gcd(b, a % b) : a;
}

int main(){
    int n;
    cin >> n;

    int* x = new int[n];
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    sort(x, x + n);

    int g = x[1] - x[0];
    for(int i = 1; i < n; i++){
        g = gcd(g, x[i] - x[i - 1]);
    }

    int ans = 0;
    for(int i = 1; i < n; i++){
        ans += (x[i] - x[i - 1]) / g - 1;
    }

    cout << ans << endl;
    delete[] x;

    return 0;
}