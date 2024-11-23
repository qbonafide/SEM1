#include <stdio.h>

int rekursif(int x, int N){
  if(N%2==1){
      if(x%2==1){
          return rekursif(2*x, N-1);
      } else{
          return rekursif(x/2, N-1);
      }
  } else {
      if(x%2==1){
          return rekursif(x-2, N-1);
      } else {
          return rekursif(x+2, N-1);
      }
  }
}
int main(){
    int x, N;
    scanf("%d %d", &x, &N);
    printf("%d", rekursif(x, N));
    
}