#include <stdio.h>

int main()
{
    int t, a, b, testcase = 1, sum;
    scanf("%d", &t);
    while(t--)
    {
        sum = 0;
        scanf("%d %d", &a, &b);
        for(int i = a; i <= b; ++i)
        {
            if(i % 2 == 1)
                sum += i;
        }
        printf("Case %d: %d\n", testcase, sum);
        ++testcase;
    }
    return 0;
}