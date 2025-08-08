#include "libft.h"
int ft_strncmp(char *s1,char *s2,size_t size)
{
    char  *pts1 =s1;
    char  *pts2= s2;
    size_t i =0;
      while (size > i)
    {
        if (pts1[i] != pts2[i])
            return pts1[i] - pts2[i];
            if (pts1[i] == '\0')
                return pts2[i] * -1;
        i++;
    }
        return 0;
}

int main ()
{
    char *a = "aa";
    char *b = "aaa";
int n = ft_strncmp(a,b,2);
printf("%d\n",n);
return 0;
}
