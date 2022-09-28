#include <iostream>
using namespace std;

int main(){
    int ans;
    cin >> ans;

    int tmp;
    for(int i = 0; i < 9; i++){
        cin >> tmp;
        ans -= tmp;
    }

    cout << ans << endl;
    return 0;
}