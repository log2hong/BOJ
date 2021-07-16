#include <iostream>
using namespace std;

int main(){
    int n, tmp, min = 1000001, max = -1000001;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> tmp;
        min = min < tmp ? min : tmp;
        max = max > tmp ? max : tmp;
    }
    cout << min << " " << max << endl;
    return 0;
}
