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

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
typedef struct s_node
{
	int value;//the num form comd line
	int index;//for sorting
	struct s_node *next;//ready link
} t_node;
// includes for librarys

// for limits
# include <limits.h>
// for tests
# include <stdio.h>
# include <unistd.h>
//
# include <stddef.h>

// for malloc and free and make the stack
# include <stdlib.h>

//for deal with the list (stack)
t_node *create_node (int val);
int get_stack_size(t_node *stack);
void push(t_node **stack, t_node *new_node);
void free_stack(t_node **stack);
void add_back(t_node **stack, t_node *new_node);

//for error handle 
void error_happend(t_node **stack);
//stack a

//stack b

#endif