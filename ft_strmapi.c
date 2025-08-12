#include "libft.h"

char	my_fun(unsigned int n, char s) // n = index of chr s = is the chr
{                                  
	// ok what i well do inside f is to make if the index is even make    lower to upper and if it odd make it upper
	if (n % 2 == 0)
		return (ft_toupper(s));
	else
		return (ft_tolower(s));
}
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_str;
	char			*ptr;

	i = 0;
	new_str = malloc(ft_strlen(s) + 1);
	ptr = new_str;
	if (!s || !f || !new_str) // is the same as ( // == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	return (ptr);
}
