/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz <motaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 14:12:48 by moodeh            #+#    #+#             */
/*   Updated: 2025/08/16 18:04:33 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*strpt ;

	strpt = s;
	while (n != 0)
	{
		*strpt = '\0';
		strpt++;
		n--;
	}
}
/*
#include <stdio.h>
#include <string.h> // عشان نستخدم bzero الأصلية للمقارنة
#include "libft.h"  // هان في ft_bzero تبعتك

int main(void)
{
    char str1[20] = "Hello World";
    char str2[20] = "Hello World";

    printf("قبل:\n");
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    // استخدام ft_bzero
    ft_bzero(str1, 5);
    // استخدام bzero الأصلية
    bzero(str2, 5);

    printf("\nبعد bzero:\n");
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    // كمان نطبع القيم بايت بايت عشان نشوف الفرق بوضوح
    printf("\nبايتات str1 بعد ft_bzero:\n");
    for (int i = 0; i < 12; i++)
        printf("%d ", (unsigned char)str1[i]);

    printf("\n\nبايتات str2 بعد bzero:\n");
    for (int i = 0; i < 12; i++)
        printf("%d ", (unsigned char)str2[i]);

    printf("\n");

    return 0;
}
*/