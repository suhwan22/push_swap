/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:50:45 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/13 21:36:57 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	get_pos(t_info *info, int target_index)
{
	t_node	*temp;
	int		target;
	int		pos_index;
	int		min_index;
	int		min;

	pos_index = 0;
	temp = info->b_stack->head.next;
	while (--target_index)
		temp = temp->next;
	target = temp->data;
	temp = info->a_stack->head.next;
	min_index = 0;
	min = info->max;
	while (pos_index < info->a_stack->size)
	{
		if (target < temp->data && min >= temp->data)
		{
			min_index = pos_index;
			min = temp->data;
		}
		pos_index++;
		temp = temp->next;
	}
	return (min_index);
}
