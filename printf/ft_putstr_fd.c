/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moodeh <moodeh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 17:28:19 by moodeh            #+#    #+#             */
/*   Updated: 2025/09/04 17:16:26 by moodeh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	len;

	if (!s)
		return ;
	len = ft_strlen(s);
	write(fd, s, len);
}
/*
#include "libft.h"
#include <fcntl.h> // open
#include <stdlib.h>

int main(void)
{
    int fd = open("test.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (fd < 0)
        return 1;

    ft_putstr_fd("Hello, World!\n", fd);
    close(fd);
    ft_putstr_fd("Printed on screen\n", 1);

    return 0;
}*/
