#include "libft.h"
char *ft_strnstr(unsigned char *haystack, unsigned char *needle, size_t n)
{
    unsigned char *pn;
    unsigned char *ph = haystack;
    size_t counter;
    size_t i =0;
    size_t j = i;
    if (*needle == '\0')
        return haystack;
    while (n > i)
    {
       counter = 0;
       j = 0;
       pn = needle;
       ph = &haystack[i];
        while (*pn != '\0' && *pn == *ph && (j+i)< n)
            {
                    counter++;
                    pn++;
                    ph++;
                    j++;
            }
        if (counter == ft_strlen(needle))
                return &haystack[i];
        i++;
    }
    return NULL;
}
