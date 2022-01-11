#include <iostream>
using namespace std;

const int SIZE = 10000;

int main(){
    int Deque[SIZE] = {0,};
    int n, front = 0, back = 1, datasize = 0;
    string str;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> str;
        if(str == "push_front"){
            int num;
            cin >> num;
            Deque[front] = num;
            front = (front - 1 + SIZE) % SIZE;
            datasize++;
        }
        else if(str == "push_back"){
            int num;
            cin >> num;
            Deque[back] = num;
            back = (back + 1) % SIZE;
            datasize++;
        }
        else if(str == "pop_front"){
            if(datasize == 0) cout << "-1" << endl;
            else{
                front = (front + 1) % SIZE;
                cout << Deque[front] << endl;
                datasize--;
            }
        }
        else if(str == "pop_back"){
            if(datasize == 0) cout << "-1" << endl;
            else{
                back = (back - 1 + SIZE) % SIZE;
                cout << Deque[back] << endl;
                datasize--;
            }
        }
        else if(str == "size"){
            cout << datasize << endl;
        }
        else if(str == "empty"){
            cout << (datasize == 0) << endl;
        }
        else if(str == "front"){
            if(datasize == 0) cout << "-1" << endl;
            else cout << Deque[(front + 1) % SIZE] << endl;
        }
        else if(str == "back"){
            if(datasize == 0) cout << "-1" << endl;
            else cout << Deque[(back - 1 + SIZE) % SIZE] << endl;
        }
    }
    return 0;
}