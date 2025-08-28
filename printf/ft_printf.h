/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz <motaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 07:53:03 by moodeh            #+#    #+#             */
/*   Updated: 2025/08/28 20:41:42 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_put_hexa_ptr(unsigned long num, char form, int fd);
int	ft_put_hexa(unsigned int num, char form, int fd);
int	ft_put_ptr(void *n, int fd);
int	ft_put_unsign(unsigned int num, int fd);
int	ft_select(const char format, va_list *ap2);
int	ft_printf(const char *format, ...);
int	ft_putstr_len(char *s, int fd);
int	ft_putchar_len(char c, int fd);
int	nbr_len(int n);
int	ft_putnbr_len(int n, int fd);

#endif