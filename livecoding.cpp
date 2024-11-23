#include <iostream>
#include <array>

using namespace std;

int main(){
    int M, N;
    cin >> M >> N; //M baris N kolom
    int matriks[M][N];
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            cin >> matriks[i][j];
            }
    }
    cout << endl;

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cout << matriks[j][i] << " ";
            }
        cout << endl;
    }
}