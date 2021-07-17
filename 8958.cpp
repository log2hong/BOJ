#include <iostream>
#include <string>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int i = 0; i < tc; i++){
        string s;
        cin >> s;
        int *score = new int[s.size()]();
        int ans = 0;
        for(int j = 0; j < s.size(); j++){
            if(j == 0) score[j] = (s[j] == 'O');
            else{
                if(s[j] == 'O'){
                    score[j] = score[j - 1] + 1;
                }
            }
            ans += score[j];
        }
        delete[] score;
        cout << ans << endl;;
    }
    return 0;
}
