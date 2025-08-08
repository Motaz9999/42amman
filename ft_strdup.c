#include "libft.h"
char	*ft_strdup(char *s)
{
	int len = ft_strlen(s);
	char *str = malloc((len+1) * sizeof(char));// 1 more bc '\0'
	char *ptr;
	if (str == NULL)
		return NULL;

	ptr = str;
	while (*s != '\0')
	{
		*str = *s;
		str++;
		s++;
	}
	*str = '\0';
return ptr;
}
