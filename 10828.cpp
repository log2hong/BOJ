#include <iostream>
using namespace std;

int main(){
    int Stack[10001] = {0,};
    int n, idx = -1;
    string str;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> str;
        if(str == "push"){
            int num;
            cin >> num;
            Stack[++idx] = num;
        }
        else if(str == "pop"){
            if(idx == -1) cout << "-1" << endl;
            else cout << Stack[idx--] << endl;
        }
        else if(str == "size"){
            cout << idx + 1 << endl;
        }
        else if(str == "empty"){
            if(idx == -1) cout << "1" << endl;
            else cout << "0" << endl;
        }
        else if(str == "top"){
            if(idx == -1) cout << "-1" << endl;
            else cout << Stack[idx] << endl;
        }
    }
    return 0;
}