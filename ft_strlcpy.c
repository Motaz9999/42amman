#include "libft.h"

size_t ft_strlcpy(char *dest,const char *src, size_t size)
{//size of dest buffer = n  + 1 for the null
    char    *ptsrc;
    char    *ptsrc_b;
    char    *ptdest;
    size_t  count_src;
    count_src = 0;
    ptdest =dest;
    ptsrc = src;
    ptsrc_b = src;
    while (*ptsrc_b != '\0')
    {
        ptsrc_b++;
        count_src++;
    }//dot count the buffer
   if (size != 0)
   {
     while (size - 1 > 0 && *ptsrc != '\0')// -1 for the buffer 
     {
         *dest = *ptsrc;
         dest++;
         ptsrc++;
         size--;
     }
     *dest = '\0';
   }
return (count_src);
}
