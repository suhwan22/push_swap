/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_num_of_commands.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:00:20 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/12 00:37:27 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	get_num_of_commands(t_info *info, int target_index)
{
	int	t;
	int	n;

	t = target_index;
	n = get_pos(info, t);
	if (t <= info->b_stack->size / 2)
	{
		if (n <= info->a_stack->size / 2)
			return (cal_t_upper_n_upper(t, n));
		else
			return (cal_t_upper_n_lower(info, t, n));
	}
	else
	{
		if (n <= info->a_stack->size / 2)
			return (cal_t_lower_n_upper(info, t, n));
		else
			return (cal_t_lower_n_lower(info, t, n));
	}
}
