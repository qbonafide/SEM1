#include <stdio.h>
#include <math.h>

double jarakterdekat(double jarak[][100], int N, double *terdekat) {
    *terdekat = jarak[0][1]; 
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i != j && jarak[i][j] < *terdekat) { 
                *terdekat = jarak[i][j];
            }
        }
    }
}

int main() {
    struct posisi {
        int x;
        int y;
    };
    
    int N;
    scanf("%d", &N);
    struct posisi bunga[N];
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &bunga[i].x, &bunga[i].y);
    }
    
    double jarak[100][100]; 
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i != j) { 
                jarak[i][j] = sqrt(pow(bunga[j].x - bunga[i].x, 2) + pow(bunga[j].y - bunga[i].y, 2));
            } 
        }
    }
    
    double terdekat;
    jarakterdekat(jarak, N, &terdekat); 
    printf("%.2lf\n", terdekat);
    
    return 0;
}
