#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str;
    int *arr = new int[26];
    fill_n(arr, 26, -1);

    for(int i = 0; i < str.size(); i++){
        if(arr[str[i] - 'a'] == -1) arr[str[i] - 'a'] = i;
    }
    for(int i = 0; i < 26; i++){
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}