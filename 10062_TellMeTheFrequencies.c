#include <stdio.h>
#include <string.h>

int main()
{
    char input[1001];
    
    int flag = 0;
    //it's possible to include space in the test case
    //gets() is able to read space
    //it gonna stop reading till it meet an EOF or \n
    while(~scanf("%[^\n]", input))
    {
        getchar();
        //make a blank line between each output
        if(flag)
            printf("\n");

        //32 <= ASCII <= 127
        int count[128] = {0};

        //go through every char and count the times each ASCII appear
        //ex. "AA", count[65] will count 2 times
        for(int i = 0; i <= strlen(input); ++i)
        {
            count[input[i]]++;
        }

        //times each ASCII appeared
        for(int i = 1; i <= strlen(input); ++i)
        {
            //ASCII
            for(int j = 127; j >= 32; --j)
            {
                if(count[j] == i)
                    printf("%d %d\n", j, i);
            }
        }
        flag = 1;
    }

    return 0;
}