#include <stdio.h>

int main(){
    int x, hasil;
    scanf("%d", &x);

    if(x%2==1){
        printf("NO");
    } else if (x%2==0){
        hasil = x/2;
        if (hasil%2==0){
        printf("YES");
            } 
        else {
        int hasil_bagi2 = x-2;
        if(hasil_bagi2%2==0 && hasil_bagi2 > 0){
            printf("YES");
        } else {
            printf("NO");
        }
        }
    }
     
    
}