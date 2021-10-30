#include <iostream>
using namespace std;

int main(){
    int N, M, K;
    cin >> N >> M;
    int **matA = new int*[N];
    for(int i = 0; i < N; i++){
        matA[i] = new int[M];
        for(int j = 0; j < M; j++){
            cin >> matA[i][j];
        }
    }
    cin >> M >> K;
    int **matB = new int*[M];
    for(int i = 0; i < M; i++){
        matB[i] = new int[K];
        for(int j = 0; j < K; j++){
            cin >> matB[i][j];
        }
    }
    
    int **mulAB = new int*[N];
    for(int i = 0; i < N; i++){
        mulAB[i] = new int[K]();
        for(int j = 0; j < K; j++){
            for(int k = 0; k < M; k++){
                mulAB[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < K; j++){
            cout << mulAB[i][j] << " ";
        }
        cout << endl;
    }
    
    for(int i = 0; i < N; i++) delete[] matA[i];
    delete[] matA;
    for(int i = 0; i < M; i++) delete[] matB[i];
    delete[] matB;
    for(int i = 0; i < N; i++) delete[] mulAB[i];
    delete[] mulAB;
    
    return 0;
}
