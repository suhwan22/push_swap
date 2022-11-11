/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_front.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 20:09:44 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/08 22:35:04 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	pop_front(t_stack *stack)
{
	t_node	*temp;
	int		data;

	if (!stack || !stack->head.next)
		return (0);
	temp = stack->head.next;
	data = temp->data;
	stack->head.next = temp->next;
	temp->next->pre = &stack->head;
	stack->size -= 1;
	free(temp);
	return (data);
}
