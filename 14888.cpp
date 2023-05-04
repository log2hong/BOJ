#include <iostream>
using namespace std;

const int MAX_N = 11, MAX_VAL = 1000000000;
int arr[MAX_N], operators[4];
int max_result = -(MAX_VAL + 1);
int min_result = MAX_VAL + 1;
int n;

void func(int val, int depth){
    if(depth == n){
        if(val > max_result)
            max_result = val;
        if(val < min_result)
            min_result = val;
        return;
    }
    for(int i = 0; i < 4; i++){
        if(operators[i] > 0){
            operators[i]--;
            switch(i){
                case 0:
                    func(val + arr[depth], depth + 1);
                    break;
                case 1:
                    func(val - arr[depth], depth + 1);
                    break;
                case 2:
                    func(val * arr[depth], depth + 1);
                    break;
                case 3:
                    func(val / arr[depth], depth + 1);
                    break;
            }
            operators[i]++;
        }
    }
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < 4; i++)
        cin >> operators[i];
    func(arr[0], 1);
    cout << max_result << endl << min_result << endl;

    return 0;
}