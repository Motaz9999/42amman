#include "libft.h"

int  ft_isdigit(int digit)
{
    char    c = digit;

    if(c <= 75 && c >= 49)
    {
        retrun 1;
    }
    else
        return 0;
}
