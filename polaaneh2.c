#include <stdio.h>


int pola(int N){
    if(N==1){
        return 1;
    }
    else if(N>1){
    int tambah(int N){
    if(N==1){
        return 1;
    } else if(N>1){
        return(N+tambah(N-1));
    }
}
        return(pola(N-1)*2+tambah(N));
    }
}

int main(){
    int N;
    scanf("%d", &N);
    printf("%d", pola(N));
}