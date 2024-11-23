#include <iostream>
#include <array>

using namespace std;

int main(){
    int M, N, P;
    cin >> M >> N >> P; //M baris N kolom
    int matrikssatu[M][N], matriksdua[N][P], matrikskali[M][P];
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            cin >> matrikssatu[i][j];
            }
    }
    cout << endl;
    
    for(int i=0; i<N; i++){
        for(int j=0; j<P; j++){
            cin >> matriksdua[i][j];
        }
    }
    cout << endl;

    for(int i=0; i<M; i++){
        for(int j=0; j<P; j++){
            matrikskali[i][j] = 0;
        }
    }
    cout << endl;

    for(int i=0; i<M; i++){
        for(int j=0; j<P; j++){
            for(int k=0; k<N; k++){
                matrikskali[i][j] += matrikssatu[i][k] * matriksdua[k][j];
            }
        
        }
    }


    for(int i=0; i<M; i++){
        for(int j=0; j<P; j++){
            cout << matrikskali[i][j] << " ";
        }
        cout << endl;
    }
}