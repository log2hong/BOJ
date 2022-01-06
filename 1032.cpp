#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    string ans, tmp;
    cin >> ans;
    for(int i = 1; i < n; i++){
        cin >> tmp;
        for(int i = 0; i < ans.size(); i++){
            if(ans[i] == '?') continue;
            else if(ans[i] != tmp[i]) ans[i] = '?';
        }
    }
    cout << ans << endl;
    return 0;
}