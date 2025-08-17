/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz <motaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 18:06:38 by moodeh            #+#    #+#             */
/*   Updated: 2025/08/17 00:28:32 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t			counter;
	size_t			i;
	size_t			j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (n > i)
	{
		counter = 0;
		j = 0;
		while (needle[j] != '\0' && needle[j] == haystack[i + j] && (j + i) < n)
		{
			counter++;
			j++;
		}
		if (counter == ft_strlen(needle))
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main(void)
{
    const char *h = "HelloWorld";
    const char *n1 = "World";
    const char *n2 = "Hello";
    const char *n3 = "oWo";
    const char *n4 = "abc";
    const char *n5 = "";

    printf("%s\n", ft_strnstr(h, n1, 10)); // World
    printf("%s\n", ft_strnstr(h, n2, 5));  // HelloWorld
    printf("%s\n", ft_strnstr(h, n3, 8));  // oWorld
    printf("%p\n", ft_strnstr(h, n4, 10)); // NULL
    printf("%s\n", ft_strnstr(h, n5, 10)); // HelloWorld
}*/