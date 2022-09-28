#include <iostream>
using namespace std;

int f[50];

void fibonacci(int n) {
    f[1] = f[2] = 1;
    for (int i = 3; i <= n; i++){
        f[i] = f[i - 1] + f[i - 2];
    }
}

int main(){
    int n;
    cin >> n;
    fibonacci(n);
    cout << f[n] << " " << n - 2 << endl;
    return 0;
}