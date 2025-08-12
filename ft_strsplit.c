#include "libft.h"
int	ft_count_words(char const *s, char c)
{
	int count = 0;// num of substrings
	int word = 0;
	while (*s != '\0')
	{
		if(*s != c && word == 0)
		{
			word = 1;// at least i have words now soo i can accept any c
			count++;// +1 bc i have word now
		}
		else if (*s == c)// the end of word
		word = 0;
		s++;
	}
	return (count);
}
char	*ft_subs(char const *start,char const *end)
{
	int i = 0;
	int	len ;
	char *str ;

	len = (int)(end - start);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
	return NULL;
	
	while(len > i)// filling it up 
	{
		str[i] = start[i];
		i++;
	}
	str[i] = '\0';
	return str;
}
void	ft_free_split(char **substring , int n)
{
	int i;
	i = 0;
	while (i < n)
	{
		free(substring[i]);
		i++;
	}
	free(substring);
}
char	**ft_split(char const *s, char c)//s= to split,c = where 33 + 25
{
	char	**substrings;
	int		i;
	int		count;
	char	*start;
	char	*end;

	if (!s)
		return (NULL);
	count = ft_count_words(s ,c);
	substrings = (char **)malloc(sizeof(char *) * (count + 1));
	if (!substrings )
		return (NULL);
	i = 0;
	while (i < count && *s)
	{
		while (*s == c)
			s++;
		start =(char *) s;
		while (*s != c && *s != '\0')
			s++;
		end =(char *) s;
		substrings[i] = ft_subs(start , end);
		if(!substrings[i])
		{
			ft_free_split(substrings, i);
			return (NULL);
		}
		i++;
	}
	substrings[i] = NULL;
	return (substrings);
}