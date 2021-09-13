#include <iostream>
using namespace std;

int main(){
    int i = 0, n;
    cin >> n;
    while(true){
        n -= i++ * 6;
        if(n <= 1) break;
    }
    cout << i << endl;

    return 0;
}