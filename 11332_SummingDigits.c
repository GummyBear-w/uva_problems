#include <stdio.h>
#include <stdlib.h>

int summing(int n);

int main()
{
    int n;
    while (scanf("%d", &n) && n)
    {
        printf("%d\n", summing(n));
    }

    return 0;
}

int summing(int n)
{
    int sum = 0;

    while (n)
    {
        sum += n % 10;
        n /= 10;
    }

    if (sum < 10)
        return sum;
    else
        return summing(sum);
}