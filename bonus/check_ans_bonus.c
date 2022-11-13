/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ans_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 20:01:41 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/13 20:42:56 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./checker_bonus.h"

#include <stdio.h>

int	check_ans_bonus(t_info *info)
{
	t_node	*temp;

	temp = info->a_stack->head.next;
	while (temp->next != &info->a_stack->tail)
	{
		if (!(temp->data < temp->next->data))
			return (0);
		temp = temp->next;
	}
	return (1);
}
