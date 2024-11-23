#include <stdio.h>
long long pola(long long N){
    long long indeks;
    long long N[indeks];
    if (indeks==0) return 0;
    if (indeks==1) return 1;
    if (indeks==2) return 2;
    int hasil;
    int hasil[N] = pola(N) + pola(N-1)+ pola(N-2);
    if(N%2==0){
        for(indeks=N; indeks>=0; indeks-=2){
            printf("%d ", hasil[indeks] );
        }
    } else {
        for(indeks=N; indeks>0; indeks-=2){
            printf("%d ", hasil[indeks]);
        }
    }
    return hasil[N];
}

int main(){
    long long  N;
    scanf("%lld", &N);


}