#include <iostream>
#include <stack>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    string str;
    while(tc--){
        stack<char> S;
        bool flag = true;
        cin >> str;
        for(int i = 0; i < str.size(); i++){
            if(str[i] == '(') S.push('(');
            else if(str[i] == ')'){
                if(S.empty()){
                    flag = false;
                    break;
                }
                else if(S.top() == '(') S.pop();
                else if(S.top() == ')'){
                    flag = false;
                    break;
                }
            }
        }
        if(!S.empty()) flag = false;

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}