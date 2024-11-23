#include <stdio.h>

int main(){
    int T, N[T];
    scanf("%d", &T);

    for(int i=0; i<T; i++){
        scanf("%d", &N[i]);
    }
    for(int i=0; i<T; i++){
        printf("%d ", N[i]);
    }
}