#include <iostream>
using namespace std;
 
char arr[1024][2048];

void draw(int n, int x, int y, bool d){
    arr[x][y] = '*';

    if(n == 1) return;

    int l = y, r = y;
    for(int i = 1; i < (1 << n) - 1; i++){
        if(d) x--;
        else x++;
        arr[x][--l] = '*'; arr[x][++r] = '*';
    }

    for(int j = l + 1; j < r; j++){
        arr[x][j] = '*';
    }

    if(d) x++;
    else x--;

    draw(n - 1, x, y, !d);
}

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < (1 << n) - 1; i++){
        for(int j = 0; j < (1 << (n + 1)) - 3; j++){
            arr[i][j] = ' ';
        }
    }

    draw(n, (n % 2 == 0) ? ((1 << n) - 2) : 0, (1 << n) - 2, n % 2 == 0);

    if(n % 2 == 0){
        for(int i = 0; i < (1 << n) - 1; i++){
            for(int j = 0; j < (1 << (n + 1)) - 3 - i; j++){
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
    else {
        for(int i = 0; i < (1 << n) - 1; i++){
            for(int j = 0; j <= (1 << n) - 2 + i; j++){
                cout << arr[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}