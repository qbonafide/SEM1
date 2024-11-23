#include <iostream>
#include <array>

using namespace std;

int main(){
    int M, N;
    cin >> M >> N; //M baris N kolom
    int matrikssatu[M][N], matriksdua[M][N], matrikstambah[M][N];
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            cin >> matrikssatu[i][j];
            }
    }
    
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            cin >> matriksdua[i][j];
        }
    }

    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            matrikstambah[i][j] = matrikssatu[i][j] + matriksdua[i][j];
        }
    }

    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            cout << matrikstambah[i][j] << " ";
        }
        cout << endl;
    }
}