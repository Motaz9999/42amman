/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz <motaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 16:15:05 by moodeh            #+#    #+#             */
/*   Updated: 2025/08/17 01:54:47 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	int	count;
	int	words;

	count = 0;
	while (*s != '\0')
	{
		words = 0;
		while (*s != c && *s != '\0')
		{
			words++;
			s++;
		}
		if (words > 0)
			count++;
		s++;
	}
	return (count);
}

char	*ft_subs(char const *start, char const *end)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = (int)(end - start);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
	{
		free(str);
		return (NULL);
	}
	while (len > i)
	{
		str[i] = start[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

void	ft_free_split(char **substring)
{
	int		i;

	i = 0;
	if(!substring)
		return ;
	while (substring[i])
	{
		free(substring[i]);
		i++;
	}
	free(substring);
}

char	**finally(char **substrings, int count, char const *s, char c)
{
	char const	*start;
	char const	*end;
	int			i;

	i = 0;
	while (i < count && *s != '\0')
	{
		while (*s == c)
			s++;
		start = s;
		while (*s != c && *s != '\0')
			s++;
		end = s;
		substrings[i] = ft_subs(start, end);
		if (!substrings[i])
		{
			ft_free_split(substrings);
			return (NULL);
		}
		i++;
	}
	substrings[i] = NULL;
	return (substrings);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**substrings;

	if (!s)
		return (NULL);
	substrings = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!substrings || !s)
		return (NULL);
	substrings = finally(substrings, ft_count_words(s, c), s, c);
	return (substrings);
}/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h" // افترض أن ft_split موجود هنا

void print_split(char **arr)
{
    int i = 0;
    if (!arr)
	 { 
		printf("NULL\n");
		 return;
	 }
    while (arr[i])
    {
        printf("'%s'\n", arr[i]);
        i++;
    }
    printf("------\n");
}

int main(void)
{
    char *s1 = "Hello,,World,,42";
    char *s2 = ",Hello,World,";
    char *s3 = "";
    char *s4 = ",,,";
    char *s5 = "HelloWorld";

    char **res;

    res = ft_strsplit(s1, ',');
    print_split(res);
    ft_free_split(res); // تحتاج تعمل دالة لتحرير المصفوفة

  

    res = ft_strsplit(s2, ',');
    print_split(res);
    ft_free_split(res);

    res = ft_strsplit(s3, ',');
    print_split(res);
    ft_free_split(res);

    res = ft_strsplit(s4, ',');
    print_split(res);
    ft_free_split(res);

    res = ft_strsplit(s5, ',');
    print_split(res);
    ft_free_split(res);
    return 0;
}

*/