/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz <motaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 18:27:59 by moodeh            #+#    #+#             */
/*   Updated: 2025/08/17 03:09:25 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void print_content(void *content)
{
    printf("%s\n", (char *)content);
}
*/
void ft_lstiter(t_list *lst, void (*f)(void *))
{
    while (lst)
    {
        f(lst->content);
        lst = lst->next;
    }
}
