#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int temp = i + i % 10 + i / 10 % 10 + i / 100 % 10 + i / 1000 % 10 + i / 10000 % 10 + i / 100000 % 10 + i / 1000000 % 10;
        if(temp == n){
            cout << i << endl;
            return 0;
        }
    }
    
    cout << "0" << endl;
    return 0;
}
