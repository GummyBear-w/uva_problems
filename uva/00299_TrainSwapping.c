#include <stdio.h>

int main()
{
    int n, l, count = 0;
    int train[50];
    scanf("%d", &n);
    while(n--)
    {
        count = 0;
        scanf("%d", &l);
        for(int i = 0; i < l; ++i)
        {
            scanf("%d", &train[i]);
        }
        for(int k = 0; k < l - 1; ++k)
        {   
            int flag = 0;
            for(int j = 0; j < l - k - 1; ++j)
            {
                if(train[j + 1] < train[j])
                {
                    ++count;
                    int temp = train[j];
                    train[j] = train[j + 1];
                    train[j + 1] = temp;
                    flag = 1;
                }
            }
            if(!flag)
                break;
        }
        printf("Optimal train swapping takes %d swaps.\n", count);
    }
    
    return 0;
}