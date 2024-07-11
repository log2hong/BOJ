#include <iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    
    while(tc--){
        int c, v;
        cin >> c >> v;
        cout << "You get " << c / v << " piece(s) and your dad gets " << c % v << " piece(s)." << endl;
    }
    return 0;
}