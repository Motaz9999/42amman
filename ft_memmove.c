#include "libft.h"

void *ft_memmove(void *dest,const void *src,size_t n)
{
    char *ptdest = dest;
    char *ptsrc = src;
//the problem here but i an not requri to fix it
    if (src < dest)
    {
        ptdest +=n-1;
        ptsrc +=n-1;
        while (n > 0)
        {
           *ptdest = *ptsrc;
           ptdest--;
           ptsrc--;
           n--;
        }
    }
    else
    {
        while (n > 0)
        {
            *ptdest = *ptsrc;
            ptdest++;
            ptsrc++;
            n--;
        }
    }
    return (dest);
}
