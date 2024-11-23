#include <stdio.h>

int main(){
    int nilai;
    scanf("%d", &nilai);

    if (nilai >=86 && nilai <=100){
        printf("A\n");
    } else if (nilai >=81 && nilai <=85){
        printf("AB\n");
    } else if (nilai >=76 && nilai <=80){
        printf("B\n");
    } else if (nilai >=66 && nilai <=75){
        printf("BC\n");
    } else if (nilai >=56 && nilai<=65){
        printf("C\n");
    } else if (nilai >=40 && nilai <=55){
        printf("D\n");
    }else if(nilai<40 && nilai>=0){
        printf("E\n");
    }

    }
