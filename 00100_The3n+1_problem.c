#include <stdio.h>

int main()
{
    int start, end, count, max, i = 0;

    while(scanf("%d %d", &start, &end) != EOF)
    {
        printf("%d %d ", start, end);
        if(start > end)
        {
            int temp = end;
            end = start;
            start = temp;
        }
        max = 0;
        for(int i = start; i <= end; ++i)
        {
            count = 1;
            int n = i;
            while (n != 1)
            {
                ++count;
                if(n % 2 == 0)
                    n /= 2;
                else
                    n = (3*n + 1);
            }
            if(max < count)
            {
                max = count;
            }
        }
        printf("%d\n",max);
    }

    return 0;
}