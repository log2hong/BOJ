#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        int sq_d12 = pow(x1 - x2, 2) + pow(y1 - y2, 2);

        if(r1 == r2 && x1 == x2 && y1 == y2) cout << -1;
        else if(sq_d12 > pow(r1 + r2, 2)) cout << 0;
        else if(sq_d12 == pow(r1 + r2, 2)) cout << 1;
        else{
            if(sq_d12 > pow(r1 - r2, 2)) cout << 2;
            else if(sq_d12 == pow(r1 - r2, 2)) cout << 1;
            else cout << 0;
        }
        cout << endl;
    }
    return 0;
}