/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:37:35 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/13 21:35:01 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./checker_bonus.h"

void	rra_bonus(t_info *info)
{
	int	data;

	if (info->a_stack->size <= 1)
		return ;
	data = pop_back_bonus(info->a_stack);
	push_front_bonus(info->a_stack, data);
}
