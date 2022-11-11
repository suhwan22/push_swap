/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal_t_upper_n_lower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 05:12:35 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/11 23:17:34 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	cal_t_upper_n_lower(t_info *info, int t, int n)
{
	int	count;

	count = 0;
	count += info->a_stack->size - n;
	count += t - 1;
	count += 1;
	return (count);
}
