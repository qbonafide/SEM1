#include <stdio.h>

double pecahkan(double *i, int *b, double *d){
    *b = *i;
    *d = *i-*b;
}

int main(){
    double angka;
    int bulat;
    double desimal;
    scanf("%lf", &angka);
    pecahkan(&angka, &bulat, &desimal);
    printf("bil bulat = %d \n", bulat);
    printf("bil desimal = %lf \n", desimal);
}