/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exe_t_upper_n_upper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:41:31 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/13 21:35:00 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	exe_t_upper_n_upper(t_info *info, int t, int n)
{
	if (n >= t)
	{
		exe_n_cmd(info, t - 1, &rr, "rr");
		exe_n_cmd(info, n - t + 1, &ra, "ra");
		exe_n_cmd(info, 1, &pa, "pa");
	}
	else
	{
		exe_n_cmd(info, n, &rr, "rr");
		exe_n_cmd(info, t - n - 1, &rb, "rb");
		exe_n_cmd(info, 1, &pa, "pa");
	}
}
