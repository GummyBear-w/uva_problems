#include <stdio.h>

int main()
{
    long long int s, d;
    while(~scanf("%lld %lld", &s, &d))
    {
        while(d > 0)
        {
            d -= s++;
        }
        printf("%lld\n", s - 1);
    }
    return 0;
}