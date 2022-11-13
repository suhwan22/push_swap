/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:29:47 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/13 21:35:01 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./checker_bonus.h"

void	sb_bonus(t_info *info)
{
	int	data;

	if (info->b_stack->size < 2)
		return ;
	data = info->b_stack->head.next->data;
	info->b_stack->head.next->data = info->b_stack->head.next->next->data;
	info->b_stack->head.next->next->data = data;
}
