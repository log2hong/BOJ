#include <iostream>
using namespace std;

int main(){
    string str;
    while(true){
        cin >> str;
        if(str == "0") break;

        int i = 0, j = str.size() - 1;
        string ans = "yes";
        while(i < j){
            if(str[i] != str[j]){
                ans = "no";
                break;
            }
            i++, j--;
        }
        cout << ans << endl;
    }

    return 0;
}