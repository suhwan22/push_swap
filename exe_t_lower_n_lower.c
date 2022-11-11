/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exe_t_lower_n_lower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:30:54 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/11 22:31:30 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	exe_t_lower_n_lower(t_info *info, int t, int n)
{
	if (info->b_stack->size - t + 1 > info->a_stack->size - n)
	{
		exe_n_cmd(info, info->a_stack->size - n, &rrr, "rrr");
		exe_n_cmd(info, (info->b_stack->size - t + 1) - \
			(info->a_stack->size - n), &rrb, "rrb");
		exe_n_cmd(info, 1, &pa, "pa");
	}
	else
	{
		exe_n_cmd(info, info->b_stack->size - t + 1, &rrr, "rrr");
		exe_n_cmd(info, (info->a_stack->size - n) - \
			(info->b_stack->size - t + 1), &rra, "rra");
		exe_n_cmd(info, 1, &pa, "pa");
	}
}
