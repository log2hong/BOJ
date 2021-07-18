#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    string *s = new string[n];
    int *arr = new int[26]{};
    bool flag = true;
    int cnt = 0;

    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    for(int i = 0; i < n; i++){
        flag = true;
        fill_n(arr, 26, 0);

        for(int j = 0; j < s[i].size(); j++){
            if(arr[s[i][j] - 'a'] != 0){
                if(s[i][j - 1] != s[i][j]){
                    flag = false;
                    break;
                }
            }
            arr[s[i][j] - 'a']++;
        }
        if(flag) cnt++;
    }

    delete[] s;
    delete[] arr;

    cout << cnt << endl;

    return 0;
}