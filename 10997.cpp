#include <iostream>
using namespace std;
 
char arr[400][400];

void draw(int n, int x, int y){
    for(int i = 1; i < 4 * n - 3; i++) arr[x][y--] = '*';
    for(int i = 1; i < 4 * n - 1; i++) arr[x++][y] = '*';
    for(int i = 1; i < 4 * n - 3; i++) arr[x][y++] = '*';
    for(int i = 1; i < 4 * n - 3; i++) arr[x--][y] = '*';
    
    arr[x][y--] = '*'; 
    arr[x][y] = '*';
 
    if(n == 2){
        arr[x][y - 1] = '*';
        arr[x + 1][y - 1] = '*';
        arr[x + 2][y - 1] = '*';
        return;
    }
 
    draw(n - 1, x, y - 1);
}
 
int main(){
    int n;
    cin >> n;
 
    if(n == 1){
        cout << "*";
    }
    else{
        for(int i = 0; i < 4 * n - 1; i++){
            for(int j = 0; j < 4 * n - 3; j++){
                arr[i][j] = ' ';
            }
        }
    
        draw(n, 0, 4 * n - 4);
    
        for(int i = 0; i < 4 * n - 1; i++){
            if(i == 1){
                cout << "*" << endl;
                continue;
            }
    
            for(int j = 0; j < 4 * n - 3; j++){
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
    
    return 0;
}