#include <iostream>
using namespace std;

int main(){
    string str;
    int ans = 0;
    cin >> str;

    for (int i = 0; i < str.size(); i++){
        if (str[i] == '1'){
            if (i + 1 < str.size()){
                if (str[i + 1] == '0'){
                    ans += 10;
                    i++;
                }
                else ans += str[i] - '0';
            }
            else ans += str[i] - '0';
        }
        else ans += str[i] - '0';
    }
    cout << ans << endl;
}
