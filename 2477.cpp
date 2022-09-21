#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int *x = new int[7];
    int *y = new int[7];

    int dir, dist;
    cin >> dir >> dist;

    x[0] = y[0] = x[6] = y[6] = 0;
    if(dir == 1) x[0] = x[6] = dist;
    else if(dir == 2) x[0] = x[6] = -dist;
    else if(dir == 3) y[0] = y[6] = -dist;
    else if(dir == 4) y[0] = y[6] = dist;

    for(int i = 1; i < 6; i++){
        cin >> dir >> dist;
        if(dir == 1) x[i] = x[i - 1] + dist, y[i] = y[i - 1];
        else if(dir == 2) x[i] = x[i - 1] - dist, y[i] = y[i - 1];
        else if(dir == 3) y[i] = y[i - 1] - dist, x[i] = x[i - 1];
        else if(dir == 4) y[i] = y[i - 1] + dist, x[i] = x[i - 1];
    }

    int ans = 0;
    for(int i = 1; i < 7; i++){
        ans += x[i] * y[i - 1] - x[i - 1] * y[i];
    }

    cout << abs(ans) * n / 2 << endl;

    return 0;
}