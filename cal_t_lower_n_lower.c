/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal_t_lower_n_lower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:18:07 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/11 23:11:27 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	cal_t_lower_n_lower(t_info *info, int t, int n)
{
	int	count;

	count = 0;
	if (info->b_stack->size - t + 1 > info->a_stack->size - n)
	{
		count += info->a_stack->size - n;
		count += (info->b_stack->size - t + 1) - (info->a_stack->size - n);
		count += 1;
	}
	else
	{
		count += info->b_stack->size - t + 1;
		count += (info->a_stack->size - n) - (info->b_stack->size - t + 1);
		count += 1;
	}
	return (count);
}
