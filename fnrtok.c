#include <stdio.h>
#include <string.h>

int main(){
    char s1[] = "Saya suka bakso dan dia suka makan bakso";
    char s2[] = "bakso";
    char* p;

    p = strtok(s1, " ");

    while(p != NULL){
        if(strcmp(p, "bakso")==0){
            printf("mi ayam ");
        } else{
            printf("%s ", p);
        }
        p = strtok(NULL, " ");
    }
    printf("\n");

    return 0;
}