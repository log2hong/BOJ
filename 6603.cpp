#include <iostream>
using namespace std;

int main(){
    while(true){
        int k;
        cin >> k;
        if(k == 0) break;
        int *S = new int[k];
        for(int i = 0; i < k; i++){
            cin >> S[i];
        }
        
        for(int a = 0; a < k - 5; a++){
            for(int b = a + 1; b < k - 4; b++){
                for(int c = b + 1; c < k - 3; c++){
                    for(int d = c + 1; d < k - 2; d++){
                        for(int e = d + 1; e < k - 1; e++){
                            for(int f = e + 1; f < k; f++){
                                cout << S[a] << " " << S[b] << " " << S[c] << " " << S[d] << " " << S[e] << " " << S[f] << endl;
                            }
                        }
                    }
                }
            }
        }
        
        cout << endl;
        delete[] S;
    }
    
    return 0;
}
