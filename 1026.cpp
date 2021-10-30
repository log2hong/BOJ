#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, S = 0;
    cin >> n;
    
    int* A = new int[n];
    int* B = new int[n];
    
    for(int i = 0; i < n; i++) cin >> A[i];
    for(int i = 0; i < n; i++) cin >> B[i];
    
    sort(A, A + n, greater<int>());
    sort(B, B + n, less<int>());
    
    for(int i = 0; i < n; i++) S += A[i] * B[i];
    
    cout << S << endl;
    
    delete[] A;
    delete[] B;
    return 0;
}
