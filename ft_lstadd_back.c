/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moodeh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 18:14:31 by moodeh            #+#    #+#             */
/*   Updated: 2025/08/14 18:17:42 by moodeh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new) // pointer to the head
{
	t_list	*current;

	current = *lst;
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
}
