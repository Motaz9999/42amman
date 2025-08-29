/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz <motaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 22:04:57 by motaz             #+#    #+#             */
/*   Updated: 2025/08/30 00:45:53 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//(buffer if the line it soo long i need to return not a one)
// and till i \n(take it with the read)  or the end of the file \0
// if nothing to read  or error  return null
// works on file and standerd input (0)
// the return include \n
////helper into the other .c file
// buffer size = n its on the user
// works without also soo we sohuld make deafult buffer if there is no input
// dont modified the fd
// must keep the point where i stop reading to the next time
// read return 0<n bytes i read    0 -> end of file      -1 -> error
// lets start
// pointer to where i stoped reading
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 2147483647
#endif

// hello		word 5
char	*get_next_line(int fd)
{
	char	*sub_line;
	int		len_of_line;
	char	*the_line;
	int		i;

	i = 0;
	sub_line = malloc(BUFFER_SIZE );
	// first of thing i want to put whole line inside one sub
	while (i < BUFFER_SIZE && sub_line[i] != '\n')
	{
		len_of_line += read(fd, sub_line, 1);
		i++;
	}
	if (sub_line[i] == '\n')
	{
		len_of_line = 0;
		return (sub_line);
	}
	else
	{
		f(sub_line,len_of_line);
	}
}
