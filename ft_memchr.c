#include "libft.h"
void *ft_memchr(void *str, int c, size_t n)
{// n = num of bytes to serch in 
    char    *pstr = str;
    while (n > 0)
    {
        if (*pstr == c)
            return pstr;
        n--;
        pstr++;
    }
    return NULL;
}
