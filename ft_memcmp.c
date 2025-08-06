#include "libft.h"
int memcmp(unsigned void *s1, unsigned void *s2, size_t n)
{// return int  < = > 0 i s1 n bytes == s2 n bytes
    char    *str1 = s1;
    char    *str2 = s2;

    while (n > 0)
    {
        if (*str1 != *str2)
            return *str1 - *str2;

         n--;
         str1++;
         str2++;
    }
return 0;
}
