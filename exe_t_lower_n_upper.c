/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exe_t_lower_n_upper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:38:09 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/13 21:35:00 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	exe_t_lower_n_upper(t_info *info, int t, int n)
{
	exe_n_cmd(info, info->b_stack->size - t + 1, &rrb, "rrb");
	exe_n_cmd(info, n, &ra, "ra");
	exe_n_cmd(info, 1, &pa, "pa");
}
