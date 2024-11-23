#include <stdio.h>
#include <algorithm.h>

int main(){
    int N, idbuah[N];
    scanf("%d", &N);
    
    for(int i=0; i<N; i++){
        scanf("%d", idbuah[i]);
    }
    
    int id[10];
    int id[0]= 0;
    int id[1]= 0;
    int id[2]= 0;
    int id[3]= 0;
    int id[4]= 0;
    int id[5]= 0;
    int id[6]= 0;
    int id[7]= 0;
    int id[8]= 0;
    int id[9]= 0;
    
    for(int i=0; i<N; i++){
        if(idbuah[i]==1){
            id[0]+=1;
        } else if (idbuah[i]==2){
            id[1]+=1;
        } else if (idbuah[i]==3){
            id[2]+=1;
        } else if (idbuah[i]==4){
            id[3]+=1;
        } else if (idbuah[i]==5){
            id[4]+=1;
        } else if (idbuah[i]==6){
            id[5]+=1;
        } else if (idbuah[i]==7){
            id[6]+=1;
        } else if (idbuah[i]==8){
            id[7]+=1;
        } else if (idbuah[i]==9){
            id[8]+=1;
        } else if (idbuah[i]==10){
            id[9]+=1;
        }
    }
    
    if(id[0]==id[1]||id[0]==id[2]||id[0]==id[3]||id[0]==id[4]||id[0]==id[5]||id[0]==id[6]||id[0]==id[7]||id[0]==id[8]||id[0]==id[9]||id[1]==id[2]||id[1]==id[3]||id[1]==id[4]||id[1]==id[5]||id[1]==id[6]||id[1]==id[7]||id[1]==id[8]||id[1]==id[9]||id[2]==id[3]||id[2]==id[4]||id[2]==id[5]||id[2]==id[6]||id[2]==id[7]||id[2]==id[8]||id[2]==id[9]||id[3]==id[4]||id[3]==id[5]||id[3]==id[6]||id[3]==id[7]||id[3]==id[8]||id[3]==id[9]||id[4]==id[5]||id[4]==id[6]||id[4]==id[7]||id[4]==id[8]||id[4]==id[9]||id[5]==id[6]||id[5]==id[7]||id[5]==id[8]||id[5]==id[9]||id[6]==id[7]||id[6]==id[8]||id[6]==id[9]||id[7]==id[8]||id[7]==id[9]||id[8]==id[9]){
        printf("-1");
    }

    printf("%d", modus);
    }