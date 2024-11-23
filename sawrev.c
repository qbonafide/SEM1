#include <stdio.h>

long long ubin(int N){
    if(N==1) return 2;
    return (ubin(N-1)*3);
}
int main(){
    int N;
    scanf("%d", &N);
    long long hasil = ubin(N);
    printf("Ada %lld model, bebaskan aku!\n", hasil);

}