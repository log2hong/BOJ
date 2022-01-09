#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    bool *row = new bool[n]{}, *col = new bool[m]{};

    string str;
    for(int i = 0; i < n; i++){
        bool flag = false;
        cin >> str;

        for(int j = 0; j < m; j++){
            if(str[j] == 'X'){
                col[j] = true;
                flag = true;
            }
        }
        row[i] = flag;
    }

    int cntRow = 0, cntCol = 0;
    for(int i = 0; i < n; i++) cntRow += !row[i];
    for(int i = 0; i < m; i++) cntCol += !col[i];

    cout << max(cntRow, cntCol) << endl;
    return 0;
}