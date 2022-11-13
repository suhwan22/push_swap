/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exe_str_op_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 19:07:35 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/13 19:37:11 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./checker_bonus.h"

void	exe_str_op(t_info *info, char *str)
{
	if (!ft_strncmp(str, "sa\n", 3))
		sa_bonus(info);
	else if (!ft_strncmp(str, "sb\n", 3))
		sb_bonus(info);
	else if (!ft_strncmp(str, "pa\n", 3))
		pa_bonus(info);
	else if (!ft_strncmp(str, "pb\n", 3))
		pb_bonus(info);
	else if (!ft_strncmp(str, "ra\n", 3))
		ra_bonus(info);
	else if (!ft_strncmp(str, "rb\n", 3))
		rb_bonus(info);
	else if (!ft_strncmp(str, "rr\n", 3))
		rr_bonus(info);
	else if (!ft_strncmp(str, "rrr\n", 4))
		rrr_bonus(info);
	else if (!ft_strncmp(str, "rra\n", 4))
		rra_bonus(info);
	else if (!ft_strncmp(str, "rrb\n", 4))
		rrb_bonus(info);
	else if (!ft_strncmp(str, "ss\n", 3))
		ss_bonus(info);
}
