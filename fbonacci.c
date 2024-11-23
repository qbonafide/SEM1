#include <stdio.h>

int fibonacci(int a, int b, int x)
{
    if (a > x)
    {
        return 0;
    }
    int sum = fibonacci(b, a + b, x);
    printf("%d ", a);
    return sum + a;
}

int main()
{
    int x, sum;
    scanf("%d", &x);
    sum = fibonacci(0, 1, x);
    printf("\n%d", sum);
    return 0;
}