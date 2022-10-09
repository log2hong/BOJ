#include <iostream>
using namespace std;

int main(){
    long long n, num, d;
    while(cin >> n){
        num = 1;
        d = 1;
        while(true){
            num %= n;
            if(num == 0) break;
            num = (num * 10 + 1) % n;
            d++;
        }
        cout << d << endl;
    }
    return 0;
}