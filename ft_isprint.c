#include "libft.h"
int ft_isprint(int arg)
{
    if(arg >= 33 && arg <= 126)
        return 1;
        else
            return 0;
}
