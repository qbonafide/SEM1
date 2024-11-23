#include <stdio.h>

int reverse(int *arr, int N){
    for(int i=0; i<N/2; i++){
        int temp = *(arr+(N-i-1));
        *(arr+(N-i-1)) = *(arr+i);
        *(arr+i) = temp;
    }
}

int main(){
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i=0; i<N; i++){
    scanf("%d", &arr[i]);
    }
    reverse(arr, N);
    for(int i=0; i<N; i++){
    printf("%d ", arr[i]);
    }
}