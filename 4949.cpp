#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    string str;
    while(true){
        stack<char> S;
        bool flag = true;
        getline(cin, str);
        if(str == ".") break;
        for(int i = 0; i < str.size(); i++){
            if(str[i] == '(') S.push('(');
            else if(str[i] == '[') S.push('[');
            else if(str[i] == ')'){
                if(S.empty() || S.top() == '['){
                    flag = false;
                    break;
                }
                else if(S.top() == '(') S.pop();
            }
            else if(str[i] == ']'){
                if(S.empty() || S.top() == '('){
                    flag = false;
                    break;
                }
                else if(S.top() == '[') S.pop();
            }
        }
        if(!S.empty()) flag = false;

        if(flag) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}