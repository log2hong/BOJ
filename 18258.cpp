#include <iostream>
using namespace std;

int Queue[2000000] = {0,};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

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
            if(front == back) cout << "-1" << '\n';
            else cout << Queue[++front] << '\n';
        }
        else if(str == "size"){
            cout << back - front << '\n';
        }
        else if(str == "empty"){
            if(front == back) cout << "1" << '\n';
            else cout << "0" << '\n';
        }
        else if(str == "front"){
            if(front == back) cout << "-1" << '\n';
            else cout << Queue[front + 1] << '\n';
        }
        else if(str == "back"){
            if(front == back) cout << "-1" << '\n';
            else cout << Queue[back] << '\n';
        }
    }
    return 0;
}