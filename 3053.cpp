#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int r;
    cin >> r;
    cout << fixed;
    cout.precision(6);
    cout << r * r * M_PI << endl;
    cout << r * r * 2 << endl;
    
    return 0;
}
