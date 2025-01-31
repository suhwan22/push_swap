/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_front_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:29:48 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/13 21:35:01 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./checker_bonus.h"

static void	push_front_first(t_stack *stack, t_node *new_node)
{
	new_node->next = &stack->tail;
	stack->head.next = new_node;
	new_node->pre = &stack->head;
	stack->tail.pre = new_node;
}

static void	push_front_common(t_stack *stack, t_node *new_node)
{
	new_node->next = stack->head.next;
	stack->head.next->pre = new_node;
	new_node->pre = &stack->head;
	stack->head.next = new_node;
}

int	push_front_bonus(t_stack *stack, int data)
{
	t_node	*new_node;

	if (!stack)
		return (0);
	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return (0);
	new_node->data = data;
	if (!stack->head.next)
		push_front_first(stack, new_node);
	else
		push_front_common(stack, new_node);
	stack->size += 1;
	return (1);
}
