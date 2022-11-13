/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:31:47 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/13 19:41:36 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./checker_bonus.h"

void	pa_bonus(t_info *info)
{
	int	data;

	if (!info->b_stack->head.next)
		return ;
	data = pop_front_bonus(info->b_stack);
	push_front_bonus(info->a_stack, data);
}
