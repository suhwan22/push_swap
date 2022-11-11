/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:31:47 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/10 21:31:30 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	pa(t_info *info, char *str)
{
	int	data;

	if (!info->b_stack->head.next)
		return ;
	if (!ft_strncmp(str, "pa", 2))
		ft_printf("pa\n");
	data = pop_front(info->b_stack);
	push_front(info->a_stack, data);
}
