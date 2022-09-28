#include <iostream>
#include <string>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for (int i = 0; i < tc; i++){
        string s;
        cin >> s;

        int cnt = 0;
        int l = 0;
        int r = s.length() - 1;
        bool isPalindrome = true;
        for (; l <= r; l++, r--){
            cnt++;

            if (s[l] != s[r]){
                isPalindrome = false;
                break;
            }
        }
        cout << (isPalindrome ? 1 : 0) << " " << (isPalindrome && !(s.length() % 2) ? cnt + 1 : cnt) << endl;
    }
    return 0;
}