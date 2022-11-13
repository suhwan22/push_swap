/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_back_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 20:05:48 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/13 21:35:00 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./checker_bonus.h"

int	pop_back_bonus(t_stack *stack)
{
	int		data;
	t_node	*temp;

	if (!stack || !stack->size)
		return (0);
	temp = stack->tail.pre;
	data = temp->data;
	temp->pre->next = &stack->tail;
	stack->tail.pre = temp->pre;
	stack->size -= 1;
	free(temp);
	return (data);
}
