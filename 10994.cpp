#include <iostream>
using namespace std;
 
char arr[400][400];
 
void draw(int n, int x, int y) {
    if(n == 1){
        arr[x][y] = '*';
        return;
    }

    for(int j = y; j < y + 4 * (n - 1) + 1; j++){
        arr[x][j] = '*';
        arr[x + 4 * (n - 1) + 1 - 1][j] = '*';
    }
 
    for(int i = x; i < x + 4 * (n - 1) + 1; i++){
        arr[i][y] = '*';
        arr[i][y + 4 * (n - 1) + 1 - 1] = '*';
    }
 
    draw(n - 1, x + 2, y + 2);
    return;
}
 
int main(){
    int n;
    cin >> n;
 
    for(int i = 0; i < 4 * (n - 1) + 1; i++){
        for (int j = 0; j < 4 * (n - 1) + 1; j++){
            arr[i][j] = ' ';
        }
    }

    draw(n, 0, 0);
 
    for(int i = 0; i < 4 * (n - 1) + 1; i++){
        for (int j = 0; j < 4 * (n - 1) + 1; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}