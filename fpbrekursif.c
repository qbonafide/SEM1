#include <stdio.h>

long long fpb(long long x, long long y){
    if(x==0) return y;
    if(y==0) return x;
    if(x>y && x>0 && y>0){
        return fpb(y, x%y);
    } else if(y>x && x>0 && y>0){
        return fpb(x, y%x);
    } 
}
//803, 154 = 154, 33
// 154, 803 =  154, 33


int main(){
    long long x, y;
    scanf("%lld %lld", &x, &y);
    printf("%lld", fpb(x, y));
    
}