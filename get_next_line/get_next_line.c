/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz <motaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 19:10:45 by motaz             #+#    #+#             */
/*   Updated: 2025/09/10 21:34:44 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*extract_line(char **stash);
static void	trim_stash(char **stash, size_t take);
static char	*join_and_free(char *s1, const char *s2);

char	*get_next_line(int fd)
{
	static char	*stash[FOPEN_MAX];
	ssize_t		bytes_readed;
	char		buff[BUFFER_SIZE + 1];

	if (fd < 0 || BUFFER_SIZE <= 0 || fd >= FOPEN_MAX)
		return (NULL);
	while (1)
	{
		if (stash[fd] && ft_strchr(stash[fd], '\n'))
			return (extract_line(&stash[fd]));
		bytes_readed = read(fd, buff, BUFFER_SIZE);
		if (bytes_readed < 0)
		{
			free(stash[fd]);
			stash[fd] = NULL;
			return (NULL);
		}
		if (bytes_readed == 0)
			break ;
		buff[bytes_readed] = '\0';
		stash[fd] = join_and_free(stash[fd], buff);
		if (!stash[fd])
			return (NULL);
	}
	return (extract_line(&stash[fd]));
}

static char	*extract_line(char **stash)
{
	char	*line;
	size_t	len;

	if (!*stash || (*stash)[0] == '\0')
	{
		free(*stash);
		*stash = NULL;
		return (NULL);
	}
	len = 0;
	while ((*stash)[len] != '\n' && (*stash)[len] != '\0')
		len++;
	if ((*stash)[len] == '\n')
		len++;
	line = (char *)malloc(len + 1);
	if (line == NULL)
	{
		free(*stash);
		*stash = NULL;
		return (NULL);
	}
	ft_strlcpy(line, *stash, len + 1);
	trim_stash(stash, len);
	return (line);
}

static void	trim_stash(char **stash, size_t take)
{
	char	*new_stash;
	size_t	remaining_len;
	size_t	len;

	if (*stash == NULL)
		len = 0;
	else
		len = ft_strlen(*stash);
	remaining_len = len - take;
	if (remaining_len <= 0)
	{
		free(*stash);
		*stash = NULL;
		return ;
	}
	new_stash = malloc(remaining_len + 1);
	if (!new_stash)
	{
		free(*stash);
		*stash = NULL;
		return ;
	}
	ft_strlcpy(new_stash, *stash + take, (remaining_len + 1));
	free(*stash);
	*stash = new_stash;
}

static char	*join_and_free(char *s1, const char *s2)
{
	char	*join;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s2)
		return (free(s1), NULL);
	if (s1 == NULL)
		s1 = ft_strdup("");
	if (!s1)
		return (NULL);
	join = malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	if (join == NULL)
	{
		return (free(s1), NULL);
	}
	while (s1[i] != '\0')
		join[j++] = s1[i++];
	free(s1);
	i = 0;
	while (s2[i] != '\0')
		join[j++] = s2[i++];
	join[j] = '\0';
	return (join);
}
