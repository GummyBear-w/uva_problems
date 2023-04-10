#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    while(~scanf("%d", &num))
    {
        int prime = 1, emirp = 0;
        for(int i = 2; i <= sqrt(num); ++i)
        {
            if(num % i == 0)
                prime = 0;
        }
        if(!prime)
            printf("%d is not prime.\n", num);
        else
        {
            int copy = num;
            while(copy > 0)
            {
                emirp *= 10;
                emirp += copy % 10;
                copy /= 10;
            }
            for(int i = 2; i <= sqrt(emirp); ++i)
            {
                if(emirp % i == 0)
                    emirp = 0;
            }
            if(emirp)
            {
                if(num != emirp)
                    printf("%d is emirp.\n", num);
                else
                    printf("%d is prime.\n", num);
            }
            else
                printf("%d is prime.\n", num);
        }
    }
    return 0;
}