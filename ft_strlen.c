#include "libft.h"
int ft_strlen(unsigned char str)
{
    int count = 0;
    while (*str != '\0')
        count++;
        return count;
}
