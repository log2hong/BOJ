#include <iostream>
using namespace std;

int main(){
    int n, max = 0, sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        sum += tmp;
        max = max > tmp ? max : tmp;
    }
    cout << fixed;
    cout.precision(9);
    cout << (double) sum * 100 / (max * n) << endl;
    return 0;
}
