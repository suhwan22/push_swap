/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:38:53 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/13 20:33:02 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./checker_bonus.h"

void	rrb_bonus(t_info *info)
{
	int	data;

	if (info->b_stack->size <= 1)
		return ;
	data = pop_back_bonus(info->b_stack);
	push_front_bonus(info->b_stack, data);
}
