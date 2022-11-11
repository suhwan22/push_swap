/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exe_t_upper_n_lower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:40:06 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/11 23:17:34 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	exe_t_upper_n_lower(t_info *info, int t, int n)
{
	exe_n_cmd(info, info->a_stack->size - n, &rra, "rra");
	exe_n_cmd(info, t - 1, &rb, "rb");
	exe_n_cmd(info, 1, &pa, "pa");
}
