#include <iostream>
using namespace std;

int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(){
    int x, y;
    cin >> x >> y;

    int daysToday = 0;
    for(int i = 0; i < y - 1; i++) daysToday += days[i];
    daysToday += x;

    switch(daysToday % 7){
        case 0: cout << "Wednesday" << endl; break;
        case 1: cout << "Thursday" << endl; break;
        case 2: cout << "Friday" << endl; break;
        case 3: cout << "Saturday" << endl; break;
        case 4: cout << "Sunday" << endl; break;
        case 5: cout << "Monday" << endl; break;
        case 6: cout << "Tuesday" << endl; break;
    }
    return 0;
}