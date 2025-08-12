#include "libft.h"
int ft_lenint(int n)
{
    int len = 0;
    if ( n == 0)
    {
        len++;
    }
    while (n > 0)
    {
        n /= 10;
        len++;
    } 
return len;
}
char    *ft_fillstr(char *s,int len,int sign, int n)
{
     if (sign == 1)
    {
        len++;
    }
    s = (char*)malloc(len + 1);

    if(!s)
    return NULL;

    s[len] = '\0';
    if(sign == 1)    
    s[0] = '-';
   if (n == 0)
    s[--len] = '0';
    while (n > 0)
    {
        s[--len] = (n%10) + '0';
        n /= 10;
    }
    return s;
}
char    *ft_itoa(int n)
{
    int len;
    int sign = 0;
    char    *str;

    if (-2147483648 == n)
    {
        return (ft_strdup("-2147483648"));
    }
    if (n < 0)
    {
        n *= -1;
        sign = 1;
    }
    len = ft_lenint(n);
    str = ft_fillstr(str , len, sign,n);
    return str;
}
