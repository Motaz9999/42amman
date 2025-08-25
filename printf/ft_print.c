/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz <motaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 11:01:37 by moodeh            #+#    #+#             */
/*   Updated: 2025/08/25 22:27:31 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_len(char *s, int fd)
{
	if (!s)
		return ((int)write(fd, "(null)", 6));
	ft_putstr_fd(s, fd);
	return ((int)ft_strlen(s));
}
int	ft_putchar_len(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}
int	nbr_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}
int	ft_putnbr_len(int n, int fd)
{
	ft_putnbr_fd(n, fd);
	return (nbr_len(n));
}