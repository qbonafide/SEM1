#include <stdio.h>

float carimax(float *ratarata, int N, float *max){
    *max = ratarata[0];
    for(int i=1; i<N; i++){
            if(ratarata[i] > *max){
                *max = ratarata[i];
            }
        }
    }


int main(){
    struct atribut{
        char namatrainer[20];
        char namapokemon[20];
        int hp;
        int attack;
        int defense;
        int speed;
    };
    
    int N;
    scanf("%d", &N);
    struct atribut peserta[N];
    for(int i=0; i<N; i++){
        scanf("%s", peserta[i].namatrainer);
        scanf("%s", peserta[i].namapokemon);
        scanf("%d", &peserta[i].hp);
        scanf("%d", &peserta[i].attack);
        scanf("%d", &peserta[i].defense);
        scanf("%d", &peserta[i].speed);
    }
    
    float ratarata[N];
    for(int i=0; i<N; i++){
        ratarata[i] = (peserta[i].hp+peserta[i].attack+peserta[i].defense+peserta[i].speed)/4;
    }
    
    float max;
    carimax(ratarata, N, &max);
    for(int i=0; i<N; i++){
        if(max == ratarata[i]){
            printf("%s wins! %s said ez\n", peserta[i].namapokemon, peserta[i].namatrainer);
            break;
        }
    }
    return 0;
}