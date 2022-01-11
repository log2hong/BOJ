#include <iostream>
using namespace std;

int gcd(int a, int b){
    return b ? gcd(b, a % b) : a;
}

int main(){
    int a, b;
    cin >> a >> b;
    int G = gcd(a, b);
    cout << G << endl << a * b / G << endl;
    return 0;
}