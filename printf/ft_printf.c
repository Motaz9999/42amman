/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz <motaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 07:53:06 by moodeh            #+#    #+#             */
/*   Updated: 2025/08/25 22:27:25 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hexa(unsigned long num, char form, int fd)
{
	int		len;
	char	*hex;

	len = 0;
	if (form == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	if (num >= 16)
		len += ft_put_hexa((num / 16), form, fd);
	len += ft_putchar_len(hex[num % 16], fd);
	return (len);
}
int	ft_put_ptr(void *n, int fd)
{
	int				len;
	unsigned long	num;

	if (!n)
		return (ft_putstr_len("0x0", fd));
	num = (unsigned long)n;
	len = 0;
	len += ft_putchar_len('0', fd);
	len += ft_putchar_len('x', fd);
	len += ft_put_hexa(num, 'x', fd);
	return (len);
}
int	ft_put_unsign(unsigned int num, int fd)
{
	int	len;

	len = 0;
	if (num >= 10)
		len += ft_put_unsign(num / 10, fd);
	len += ft_putchar_len((num % 10) + '0', fd);
	return (len);
}
int	ft_select(const char format, va_list *ap2)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar_len((char)va_arg(*ap2, int), 1); // done
	else if (format == 's')
		len += ft_putstr_len(va_arg(*ap2, char *), 1); // done
	else if (format == 'd' || format == 'i')           // done this
		len += ft_putnbr_len(va_arg(*ap2, int), 1);
	else if (format == '%') // done
		len += ft_putchar_len('%', 1);
	else if (format == 'u') // done
		len += ft_put_unsign(va_arg(*ap2, unsigned int), 1);
	else if (format == 'p')
		len += ft_put_ptr(va_arg(*ap2, void *), 1);
	else if (format == 'x' || format == 'X') // done this
		len += ft_put_hexa(va_arg(*ap2, unsigned int), format, 1);
	return (len);
}
int	ft_printf(const char *format, ...)
{
	int		len;
	va_list	ap;

	len = 0;
	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++;
			len += ft_select(*format, &ap);
		}
		else
			len += (int)write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (len);
}
