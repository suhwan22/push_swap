/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:34:49 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/13 19:40:12 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./checker_bonus.h"

void	ra_bonus(t_info *info)
{
	int	data;

	if (info->a_stack->size <= 1)
		return ;
	data = pop_front_bonus(info->a_stack);
	push_back_bonus(info->a_stack, data);
}
