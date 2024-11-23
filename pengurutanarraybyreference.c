#include <stdio.h>

void sort(int *arr, int N) { 
    for (int i = 0; i < N; i++) { 
        for (int j = 0; j < N; j++) { 
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int N;
    printf("Masukkan jumlah array: \n");
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    sort(arr, N);

    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}