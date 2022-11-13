/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:34:27 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/13 19:41:23 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./checker_bonus.h"

void	pb_bonus(t_info *info)
{
	int	data;

	if (!info->a_stack->head.next)
		return ;
	data = pop_front_bonus(info->a_stack);
	push_front_bonus(info->b_stack, data);
}
