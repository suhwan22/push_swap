/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:36:45 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/13 19:39:58 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./checker_bonus.h"

void	rb_bonus(t_info *info)
{
	int	data;

	if (info->b_stack->size <= 1)
		return ;
	data = pop_front_bonus(info->b_stack);
	push_back_bonus(info->b_stack, data);
}
