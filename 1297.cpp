#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int k, a, b;
    cin >> k >> a >> b;
    double c = k / sqrt(pow(a, 2) + pow(b, 2));
    cout << (int)(a * c) << " " << (int) (b * c) << endl;
    return 0;
}
