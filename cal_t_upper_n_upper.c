/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal_t_upper_n_upper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 05:12:35 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/12 00:36:42 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	cal_t_upper_n_upper(int t, int n)
{
	int	count;

	count = 0;
	if (n >= t)
	{
		count += t - 1;
		count += n - t + 1;
		count += 1;
	}
	else
	{
		count += n;
		count += t - n - 1;
		count += 1;
	}
	return (count);
}
