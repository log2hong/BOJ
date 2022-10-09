#include <iostream>
using namespace std;

int main(){
    int n, d = 1, num = 1;
    cin >> n;

    while(true){
        if(num % n == 0) break;
        d++;
        num = (num * 10 + 1) % n;
    }
    cout << d << endl;
    return 0;
}