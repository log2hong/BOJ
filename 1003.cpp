#include <iostream>
using namespace std;

long long int d[50] = {0, 1};

long long int Fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(d[n] != 0) return d[n];
    d[n] = Fibonacci(n - 1) + Fibonacci(n - 2);
    return d[n];
}

int main(){
    int tc;
    cin >> tc;
    int n;
    while(tc--){
        cin >> n;
        if(n == 0) cout << "1 0" << endl;
        else cout << Fibonacci(n - 1) << " " << Fibonacci(n) << endl;
    }
    return 0;
}