/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval < frcarval@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 23:09:29 by frcarval          #+#    #+#             */
/*   Updated: 2021/11/23 19:47:08 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)// n = num of bytes i wann erase
{
    char *voidpt = s;//useing charpt to make the ++ only one time per time


    while (n != 0)
    {
        *voidpt = '\0';
        voidpt++;
        n--;
    }
}
