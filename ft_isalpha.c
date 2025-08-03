/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moodeh < frcarval@student.42lisboa.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 23:09:29 by frcarval          #+#    #+#             */
/*   Updated: 2021/11/23 19:47:08 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(int c)
{
	char	alpha = c;

	if((alpha <= 90 && alpha >= 65) || (alpha <= 122 && alpha >= 97))
	{
        return 1;
	}
    else
        return 0;
}

