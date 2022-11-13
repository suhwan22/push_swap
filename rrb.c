/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:38:53 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/13 21:35:01 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	rrb(t_info *info, char *str)
{
	int	data;

	if (info->b_stack->size <= 1)
		return ;
	if (!ft_strncmp(str, "rrb", 3))
		ft_printf("rrb\n");
	data = pop_back(info->b_stack);
	push_front(info->b_stack, data);
}
