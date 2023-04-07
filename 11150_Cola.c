#include <stdio.h>

int main()
{
    int n;
    while(~scanf("%d", &n))
    {
        printf("%d\n", n*3/2);
    }
    return 0;
}

//每次交換會給出3瓶得到1瓶，意思是換一次會少2瓶並多喝一瓶，瓶子總數原為n，交換後為n-2，實際上喝到的可樂為n+1*交換次數
//每次交換總數都會少2瓶，所以至多可以換n/2次（解釋：最多有辦法少n瓶，每次少2瓶，可換n/2次）
//最後喝到的可樂數是n+n/2，整理成n*3/2