#include <iostream>
using namespace std;

int main(){
    int Queue[10001] = {0,};
    int n, front = -1, back = -1;
    string str;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> str;
        if(str == "push"){
            int num;
            cin >> num;
            Queue[++back] = num;
        }
        else if(str == "pop"){
            if(front == back) cout << "-1" << endl;
            else cout << Queue[++front] << endl;
        }
        else if(str == "size"){
            cout << back - front << endl;
        }
        else if(str == "empty"){
            if(front == back) cout << "1" << endl;
            else cout << "0" << endl;
        }
        else if(str == "front"){
            if(front == back) cout << "-1" << endl;
            else cout << Queue[front + 1] << endl;
        }
        else if(str == "back"){
            if(front == back) cout << "-1" << endl;
            else cout << Queue[back] << endl;
        }
    }
    return 0;
}