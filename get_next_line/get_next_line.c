/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moodeh <moodeh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 19:10:45 by motaz             #+#    #+#             */
/*   Updated: 2025/09/09 18:07:39 by moodeh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*extract_line(char **stash);
static void	trim_stash(char **stash, size_t take);
static char	*join_and_free(char *s1, const char *s2);
static char	*fun(char **stash, int bytes_readed);

char	*get_next_line(int fd)
{
	static char	*stash = NULL;
	ssize_t		bytes_readed;
	char		buff[BUFFER_SIZE + 1];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	while (1)
	{
		if (stash && ft_strchr(stash, '\n'))
			return (extract_line(&stash));
		bytes_readed = read(fd, buff, BUFFER_SIZE);
		if (bytes_readed <= 0)
			return (fun(&stash, bytes_readed));
		buff[bytes_readed] = '\0';
		stash = join_and_free(stash, buff);
		if (!stash)
			return (NULL);
	}
}

static char	*fun(char **stash, int bytes_readed)
{
	char		*line;

	if (bytes_readed < 0)
	{
		free(*stash);
		*stash = NULL;
		return (NULL);
	}
	if (bytes_readed == 0)
	{
		if (*stash != NULL && **stash != '\0')
		{
			line = *stash;
			stash = NULL;
			return (line);
		}
		free(*stash);
		*stash = NULL;
		return (NULL);
	}
	return (NULL);
}

static char	*extract_line(char **stash)
{
	char	*line;
	size_t	len;

	len = 0;
	while ((*stash)[len] != '\n' && (*stash)[len] != '\0')
		len++;
	if ((*stash)[len] == '\n')
		len++;
	line = NULL;// (char *)malloc(len + 1);//error happend when line = NULL
	if (line == NULL)
	{
		free(stash);
		return (NULL);
	}
	ft_strlcpy(line, *stash, len + 1);
	trim_stash(stash, len);
	return (line);
}

static void	trim_stash(char **stash, size_t take)
{
	char	*new_stash;
	int		remaining_len;

	remaining_len = ft_strlen(*stash) - take;
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
	ft_strlcpy(new_stash, *stash + take, remaining_len + 1);
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
	if (s1 == NULL)
		s1 = ft_strdup("");
	if (!s1 || !s2)
		return (NULL);
	join = malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	if (join == NULL)
	{
		free(s1);
		return (NULL);
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
