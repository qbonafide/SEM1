#include <stdio.h>
#include <string.h>

int main(){
    struct mahasiswa{
        char nama[100];
        int mtk;
        int ipa;
        int bindo;
        int bing;
    };
    
    int N;
    scanf("%d", &N);
    struct mahasiswa mhs[N];
    for(int i=0; i<N; i++){
        scanf("%s", mhs[i].nama);
        scanf("%d", &mhs[i].mtk);
        scanf("%d", &mhs[i].ipa);
        scanf("%d", &mhs[i].bindo);
        scanf("%d", &mhs[i].bing);
    }
    
    int cari;
    scanf("%d", &cari);
    char carinama[100];
    
    for(int k=0; k<cari; k++){
        scanf("%s", carinama);
        int found = 0;
        
        for(int i=0; i<N; i++){
        if(strcmp(mhs[i].nama, carinama)==0){
            printf("Nilai %s\n", mhs[i].nama);
            printf("Matematika : %d\n", mhs[i].mtk);
            printf("IPA : %d\n", mhs[i].ipa);
            printf("Bahasa Indonesia : %d\n", mhs[i].bindo);
            printf("Bahasa Inggris : %d\n", mhs[i].bing);
            found = 1;
            break;
        }
    }
        if (!found) {
            printf("Nilai %s tidak ditemukan\n", carinama);
}
}
return 0;
}