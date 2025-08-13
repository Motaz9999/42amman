/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz <motaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 21:58:41 by motaz             #+#    #+#             */
/*   Updated: 2025/08/13 23:32:15 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new) // pointer to the head
{
	t_list *current = *lst;
	if (!new)
		return ;
        if (!*lst)
        {
            *lst =new;
            return ;
        }
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
}
