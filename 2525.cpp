#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    a += c / 60;
    b += c % 60;
    a += b / 60;
    
    cout << a % 24 << " " << b % 60;
    return 0;
}