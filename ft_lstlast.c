/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz <motaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 21:49:06 by motaz             #+#    #+#             */
/*   Updated: 2025/08/13 23:27:32 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	//int		size;
	t_list	*current;

	//size = ft_lstsize(lst);
		// if i have 5 list i start from zero 01234 so last one it be size - 1
	current = lst;
	while (current->next != NULL)
	{
		current = current->next;
		//size--;
	}
	return (current);
}
