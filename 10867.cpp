#include <iostream>
using namespace std;

bool chk[2001];

int main(){
    int n;
    cin >> n;

    int tmp;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        chk[tmp + 1000] = true;
    }

    for(int i = 0; i < 2001; i++){
        if(chk[i]) cout << i - 1000 << " ";
    }

    return 0;
}