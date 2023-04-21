#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001];

    while(gets(str))
    {
        char table[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
        for(int i = 0; i < strlen(str); ++i)
        {
            for(int j = 0; j < strlen(table); ++j)
            {
                if(str[i] == ' ')
                {
                    printf(" ");
                    break;
                }   
                if(str[i] == table[j])
                {
                    printf("%c", table[j - 2]);
                    break;
                }
            }
        }
        printf("\n");
    }
    return 0;
}