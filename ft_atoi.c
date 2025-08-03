#include "libft.h"

int ft_strlen(char *string)
{
    int count = 0;
    while(*string != '\0')
    {
        count++;
        string++;
    }
    return count;
}

int ft_atoi(const char *nptr)
{
    int num = 0;
    int len = ft_strlen(nptr);
    char ch;
    int i = 0;
// if he wants to skip the spaces and make sure to make it -- or ++ edit here
// then continue
    
    while(nptr[i] != '\0')
    {
        ch = nptr[i];
        if(ft_isdigit(ch))// to make sure its digit
        {
            num += ch - 48;
            if(i < (len - 1) && ft_isdigit(nptr[i + 1])
            {
                num *= 10;
            }
        }
        else
            break;
        i++;
    }
    return num;
}
