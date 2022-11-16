#include <iostream>
using namespace std;

int main(){
    int arr[9][9];
    int max = -1, maxR = 0, maxC = 0;
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cin >> arr[i][j];
            if(max < arr[i][j]){
                max = arr[i][j];
                maxR = i + 1;
                maxC = j + 1;
            }
        }
    }
    cout << max << endl;
    cout << maxR << " " << maxC << endl;

    return 0;
}