#include <stdio.h>

int main()
{
    int n, m, res[2000], i = 0, copy;

    while (scanf("%d %d", &n, &m) == 2)
    {
        i = 0;
        copy = n;
        if(n <= 1)
        {
            printf("Boring!\n");
            continue;
        } 
        while (n > 1)
        {
            if (m == 1 || m == 0)
            {
                printf("Boring!\n");
                break;
            }
            else if (!(n % m))
            {
                n /= m;
                res[i] = n;
                ++i;
            }
            else
            {
                printf("Boring!\n");
                break;
            }
        }
        if(n == 1)
        {
            printf("%d ", copy);
            for(int j = 0; j < i; ++j)
            {
                printf("%d", res[j]);
                if(j != i - 1)
                {
                    printf(" ");
                }
                else
                    printf("\n");
            }
        }
    }
    return 0;
}