#include <iostream>
using namespace std;

int main(){
    int ans = 0;
    for(int i = 0; i < 5; i++){
        int temp;
        cin >> temp;
        ans += temp > 40 ? temp : 40;
    }
    cout << ans / 5 << endl;
    
    return 0;
}
