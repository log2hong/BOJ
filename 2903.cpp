#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int c = 2;
    for(int i = 0; i < n; i++){
        c += c - 1;
    }
    cout << c * c << endl;
    
    return 0;
}