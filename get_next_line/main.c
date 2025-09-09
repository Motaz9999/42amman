/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moodeh <moodeh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 18:13:08 by moodeh            #+#    #+#             */
/*   Updated: 2025/09/09 18:13:09 by moodeh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int main(void)
{
int fd = open("test2.txt", O_RDONLY);
char *line;

line = get_next_line(fd);
printf("%s\n",line);
    free(line);
while (line)
{
    line = get_next_line(fd);
    printf("%s\n",line);
    free(line);
}
close(fd);

}
