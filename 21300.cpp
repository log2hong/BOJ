#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    for(int i = 0; i < 6; i++){
        int n;
        cin >> n;
        sum += n;
    }

    cout << sum * 5 << endl;
    return 0;
}