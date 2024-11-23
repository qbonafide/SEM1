#include <stdio.h>

int main(){
    int x, y, fpb=1;
    scanf("%d %d", &x, &y);

    for(int i=2; i<x*y; i++){
        if(x%i==0 && y%i==0){
            fpb *=i;
            x /=i;
            y /=i;
            i--;
        }
    }

    printf("%d", fpb);
}
