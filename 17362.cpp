#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(((n - 1) / 4) % 2){
        if(n % 4) cout << 6 - n % 4 << endl;
        else cout << 2 << endl;
    }
    else{
        if(n % 4) cout << n % 4 << endl;
        else cout << 4 << endl;

    }
    return 0;
}