#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    char *str = s;
    int strlen = ft_strlen(str);
    while (strlen >= 0)
    {
        if (str[strlen] == c)
        {
           str = &str[strlen];
            return str;
        }
        strlen--;
    }
    return NULL;
}
