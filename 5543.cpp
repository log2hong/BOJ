#include <iostream>
using namespace std;

int main(){
    int min_hamburger = 2001, min_drink = 2001, tmp;

    for(int i = 0; i < 3; i++){
        cin >> tmp;
        min_hamburger = min(min_hamburger, tmp);
    }

    for(int i = 0; i < 2; i++){
        cin >> tmp;
        min_drink = min(min_drink, tmp);
    }
    
    cout << min_hamburger + min_drink - 50 << endl;

    return 0;
}