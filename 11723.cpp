#include <iostream>
#include <memory.h>
using namespace std;

bool S[21];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int m;
    cin >> m;

    string operation;
    int n;
    while(m--){
        cin >> operation;
        if(operation == "all") memset(S, true, 21 * sizeof(bool));
        else if(operation == "empty") memset(S, false, 21 * sizeof(bool));
        else{
            cin >> n;
            if(operation == "add") S[n] = true;
            else if(operation == "remove") S[n] = false;
            else if(operation == "check") cout << S[n] << '\n'';
            else if(operation == "toggle") S[n] ^= 1;
        }
    }
    return 0;
}
