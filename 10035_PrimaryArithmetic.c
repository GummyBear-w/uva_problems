#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, carry = 0, temp = 0;

    while(scanf("%d %d", &a, &b) && (a || b))
    {
        carry = 0;
        temp = 0;
        while(a > 0 || b > 0)
        {
            if(a % 10 + b % 10 + temp > 9)
            {
                carry++;
                temp = 1;
            }
            else
                temp = 0;
            a /= 10;
            b /= 10;
        }
        if(carry == 0)
            printf("No carry operation.\n");
        else if(carry == 1)
            printf("%d carry operation.\n", carry);
        else
            printf("%d carry operations.\n", carry);
    }

    return 0;
}