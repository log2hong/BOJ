#include <iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        int v, e;
        cin >> v >> e;
        cout << 2 - v + e << endl;
    }
    return 0;
}