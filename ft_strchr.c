/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz <motaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 17:03:01 by moodeh            #+#    #+#             */
/*   Updated: 2025/08/16 19:32:40 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    char str[] = "Hello, 42!";
    char *ptr;

    ptr = ft_strchr(str, 'o');
    if (ptr)
        printf("Found 'o' at position: %ld\n", (ptr - str) + 1);
    else
        printf("'o' not found\n");

    ptr = ft_strchr(str, 'z');
    if (ptr)
        printf("Found 'z' at position: %ld\n", ptr - str + 1);
    else
        printf("'z' not found\n");

    // البحث عن '\0'
    ptr = ft_strchr(str, '\0');
    if (ptr)
        printf("Found '\\0' at position: %ld\n", ptr - str + 1);

    return 0;
}
*/
