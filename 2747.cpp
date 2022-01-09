#include <iostream>
using namespace std;

int d[50] = {0, 1};

int Fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(d[n] != 0) return d[n];
    d[n] = Fibonacci(n - 1) + Fibonacci(n - 2);
    return d[n];
}

int main(){
    int n;
    cin >> n;
    cout << Fibonacci(n) << endl;
    return 0;
}