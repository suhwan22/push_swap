/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:31:47 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/13 21:38:21 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	pa(t_info *info, char *str)
{
	int	data;

	if (!info->b_stack->size)
		return ;
	if (!ft_strncmp(str, "pa", 2))
		ft_printf("pa\n");
	data = pop_front(info->b_stack);
	push_front(info->a_stack, data);
}
