#include "libft.h"
int ft_isalnum(int arg)
{
    char    c = arg;
    if((48 <= c && c <= 57) || (65 <= c && c <= 90) ||(97 <= c && c <= 122))
    {
        return 1;
    }
    else
        return 0;
}
