/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz <motaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 22:05:49 by motaz             #+#    #+#             */
/*   Updated: 2025/09/27 01:06:29 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef STACK_H
# define STACK_H

// includes for librarys
# include "libft_printf/libft/libft.h"
# include "libft_printf/printf/ft_printf.h"
// for limits
# include <limits.h>
// for tests
# include <stdio.h>
# include <unistd.h>
//
# include <stddef.h>

// for malloc and free and make the stack
# include <stdlib.h>

// here i make the node (and the list is stack it self) u here make the node and in the main u make the list then turn the list into stack
typedef struct s_list
{
	int				content;
	struct s_list	*next;
}					t_node;
//for deal with the list (stack)
t_node				*ft_new_node(int content);
void				ft_add_front(t_node **stack, t_node *new_node);
int					ft_stack_size(t_node *stack);
#endif