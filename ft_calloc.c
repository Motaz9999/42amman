#include "libft.h"
void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t i;
	char *loca;

	if (nmemb == 0 || size == 0)
	{
		return malloc(1);//didnt locat anything at least 1 for free
	}

	if (nmemb != 0 && ((nmemb * size)/nmemb) != size)//stack overflow
		            return NULL;

	i = size *nmemb;

	loca = malloc(i);// elms *  perelms size

	if (loca == NULL)
		return NULL;

	while (i > 0)
	{
		loca[i - 1] = 0;
		i--;
	}
	return loca;
}
