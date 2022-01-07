#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
    int arr[3];
    while(true){
        cin >> arr[0] >> arr[1] >> arr[2];
        if(!(arr[0] | arr[1] | arr[2])) break;
        sort(arr, arr + 3);

        if(pow(arr[2], 2) == pow(arr[1], 2) + pow(arr[0], 2)) cout << "right" << endl;
        else cout << "wrong" << endl;
    }
    return 0;
}