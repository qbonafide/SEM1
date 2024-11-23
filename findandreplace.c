#include <stdio.h>
#include <string.h>

int main(){
    char s1[] = "Saya suka bakso";
    char s2[] = "bakso";
    char* p;

    p = strstr(s1, s2);
    printf("%s\n", s1);

    if (p) {
        printf("p = %s\n", p);
        strcpy(p, "mi ayam");
        printf("p = %s\n", p);
        printf("%s", s1);
    }
    else {
        printf("String not found\n");
    }

    return 0;
}