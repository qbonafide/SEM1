#include <stdio.h>
#include <math.h>

int main(){
    long long x;
    scanf("lld", &x);
    int jumlah_digit = floor(log(x)+1);

    if(jumlah_digit == 17){
        int bil_ketujuhbelas = x%10;
        int bil_kesatu = x/10000000000000000; //dibagi 10 pangkat 16

        int bil_keenambelas = (x%100)/10;
        int bil_kedua = (x/1000000000000000)%10;// 10 pangkat 15

        int bil_kelimabelas = (x%1000)/100;
        int bil_ketiga =(x/100000000000000)%10; //14

        int bil_keempatbelas = (x%10000)/1000;
        int bil_keempat = (x/10000000000000)%10;//13

        int bil_ketigabelas = (x%100000)/10000;
        int bil_kelima = (x%1000000000000)%10; //12

        int bil_keduabelas = (x%1000000)/100000;
        int bil_keenam = (x%100000000000)%10; //11

        int bil_kesebelas = (x%10000000)/1000000;
        int bil_ketujuh = (x%10000000000)%10; //10

        int bil_kesepuluh = (x%100000000)/10000000;
        int bil_kedelapan = (x%1000000000)%10; //9

        if((bil_ketujuhbelas == bil_kesatu) && (bil_keenambelas == bil_kedua) && (bil_kelimabelas == bil_ketiga) && (bil_keempatbelas == bil_keempat) && (bil_ketigabelas == bil_kelima) && (bil_keduabelas == bil_keenam) && (bil_kesebelas == bil_ketujuh) && (bil_kesepuluh == bil_kedelapan)){
            printf("Juicy!! akU sUka jUmlAh PalIndRome!!");
        } else {
            printf("Gamauuu!!, mending makan potato chip!!");
        }

    }

}