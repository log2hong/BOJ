#include <iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int s, n;
        cin >> s >> n;
        while(n--){
            int q, p;
            cin >> q >> p;
            s += q * p;
        }
        cout << s << endl;
    }
    return 0;
}