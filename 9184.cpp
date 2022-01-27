#include <iostream>
#include <algorithm>
#include <memory.h>
using namespace std;

int arr[21][21][21];
int a, b, c;

int f(int x, int y, int z) {
    if (x <= 0 || y <= 0 || z <= 0) return 1;
    if (x > 20 || y > 20 || z > 20) return f(20, 20, 20);

    int &ret = arr[x][y][z];
    if (ret != -1) return ret;
    if (x < y && y < z) return ret = f(x, y, z - 1) + f(x, y - 1, z - 1) - f(x, y - 1, z);
    return ret = f(x - 1, y, z) + f(x - 1, y - 1, z) + f(x - 1, y, z - 1) - f(x - 1, y - 1, z - 1);
}

int main() {
    memset(arr, -1, sizeof(arr));
    
    cin >> a >> b >> c;
    while (!(a == -1 && b == -1 && c == -1)){
        cout << "w(" << a << ", " << b << ", " << c << ") = " << f(a, b, c) << endl;
        cin >> a >> b >> c;
    }
    return 0;
}