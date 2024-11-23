#include <stdio.h>

int main(){
    int x, hasil=1;
    scanf("%d", &x);

    for(int i=x; i>0; i--){
        hasil *= i;
    }
    printf("%d", hasil);
}