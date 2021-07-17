#include <iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int i = 0; i < tc; i++){
        int n;
        cin >> n;
        int *score = new int[n];
        int sum = 0, overavg = 0;
        for(int j = 0; j < n; j++){
            cin >> score[j];
            sum += score[j];
            score[j] *= n;
        }
        for(int j = 0; j < n; j++){
            overavg += (score[j] > sum);
        }
        delete[] score;
        cout << fixed;
        cout.precision(3);
        cout << (double) overavg * 100 / n << "%" << endl;
    }
    return 0;
}
