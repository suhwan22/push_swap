/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exe_t_index.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:10:58 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/13 21:35:00 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	exe_t_index(t_info *info, int target_index)
{
	int	t;
	int	n;

	t = target_index;
	n = get_pos(info, t);
	if (t <= info->b_stack->size / 2)
	{
		if (n <= info->a_stack->size / 2)
			exe_t_upper_n_upper(info, t, n);
		else
			exe_t_upper_n_lower(info, t, n);
	}
	else
	{
		if (n <= info->a_stack->size / 2)
			exe_t_lower_n_upper(info, t, n);
		else
			exe_t_lower_n_lower(info, t, n);
	}
}
