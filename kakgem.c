#include <stdio.h>

int main(){
    int durasi, bayaran;
    scanf("%d %d", &durasi, &bayaran);

    int perbandingan = bayaran / durasi;

    if(durasi > 10 || bayaran > 100000000){
        printf("GUWENDENG");
    }
    if(durasi > 10 && bayaran > 100000000){
        printf("GAK MASUK AKAL");
    }

    if(perbandingan < 15000){
        printf("Tapi tunggu dulu ;D");
    } else {
        printf("PAHAM!");
    }
}