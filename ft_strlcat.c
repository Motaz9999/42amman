#include "libft.h"
size_t ft_strlcat(char *dest ,char const *src,size_t size)
{
    char    *ptsrc = src;//bc its const
    size_t len_dest;
    len_dest = ft_strlen(dest);//know the last char in dest
    dest += len_dest ;// bc it start from len dest is totall len of dest
 if (size != 0)
 {   while (size - 1> 0 && *ptsrc != '\0')// last one is '\0'
    {
        *dest = *ptsrc;
        dest++;
        ptsrc++;
        size--;
    }
    *dest = '\0';
}
    len_dest += ft_strlen(src);
    return (len_dest);

}
