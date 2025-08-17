/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz <motaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 18:22:05 by moodeh            #+#    #+#             */
/*   Updated: 2025/08/16 18:01:55 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	while (*nptr != '\0' && (*nptr >= 48 && *nptr <= 57))
	{
		num = num * 10 + (*nptr - '0');
		nptr++;
	}
	return (sign * num);
}
/*
#include <stdio.h>
#include <stdlib.h> // for original atoi

int	main(void)
{
	char *tests[] = {
		"42",
		"   42",
		"   -42",
		"+42",
		"--42",
		"4193 with words",
		"words and 987",
		"2147483647",    // INT_MAX
		"-2147483648",   // INT_MIN
		"2147483648",    // Overflow
		"-2147483649",   // Underflow
		"",
		"   +0",
		"0000123",
		NULL
	};
	for (int i = 0; tests[i] != NULL; i++)
	{
		printf("Input: \"%s\"\n", tests[i]);
		printf("ft_atoi: %d | atoi: %d\n", ft_atoi(tests[i]), atoi(tests[i]));
		printf("-----------------------------\n");
	}
	return (0);
}
*/