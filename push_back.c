/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:17:19 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/10 05:21:02 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	push_back_first(t_stack *stack, t_node *new_node)
{
	new_node->pre = &stack->head;
	new_node->next = &stack->tail;
	stack->head.next = new_node;
	stack->tail.pre = new_node;
}

void	push_back_common(t_stack *stack, t_node *new_node)
{
	new_node->pre = stack->tail.pre;
	new_node->next = &stack->tail;
	stack->tail.pre->next = new_node;
	stack->tail.pre = new_node;
}

int	push_back(t_stack *stack, int data)
{
	t_node	*new_node;

	if (!stack)
		return (0);
	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (0);
	new_node->data = data;
	if (stack->tail.pre == &stack->head)
		push_back_first(stack, new_node);
	else
		push_back_common(stack, new_node);
	stack->size += 1;
	return (1);
}
