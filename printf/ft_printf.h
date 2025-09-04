/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moodeh <moodeh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 07:53:03 by moodeh            #+#    #+#             */
/*   Updated: 2025/09/04 17:30:46 by moodeh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_putchar_fd(char c, int fd);
int	ft_put_hexa(unsigned int num, char form, int fd);
int	ft_putnbr_len(int n, int fd);
int	nbr_len(int n);
int	ft_putchar_len(char c, int fd);
int	ft_putstr_len(char *s, int fd);
size_t	ft_strlen(const char *str);
size_t	ft_strlen(const char *str);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
int	ft_printf(const char *format, ...);


#endif