/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal_t_lower_n_upper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:30:02 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/11 23:17:34 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	cal_t_lower_n_upper(t_info *info, int t, int n)
{
	int	count;

	count = 0;
	count += info->b_stack->size - t + 1;
	count += n;
	count += 1;
	return (count);
}
