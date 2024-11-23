#include <stdio.h>

int main(){
    int x, y, fpb=1;
    scanf("%d %d", &x, &y);
    int x_awal = x;
    int y_awal = y;

    for(int i=2; i<x*y; i++){
        if(x%i==0 && y%i==0){
            fpb *=i;
            x /=i;
            y /=i;
            i--;
        }
    }
    int kpk=(x_awal*y_awal)/fpb;
    printf("%d", kpk);
}
