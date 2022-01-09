#include <iostream>
using namespace std;

int main(){
    int l, p, n;
    cin >> l >> p;
    for(int i = 0; i < 5; i++){
        cin >> n;
        cout << n - l * p << " ";
    }
    return 0;
}