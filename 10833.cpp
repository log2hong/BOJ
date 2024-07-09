#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int sum = 0;
    while(n--){
        int s, a;
        cin >> s >> a;
        sum += a % s;
    }
    
    cout << sum << endl;
    return 0;
}