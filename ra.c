/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:34:49 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/13 21:35:01 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	ra(t_info *info, char *str)
{
	int	data;

	if (info->a_stack->size <= 1)
		return ;
	if (!ft_strncmp(str, "ra", 2))
		ft_printf("ra\n");
	data = pop_front(info->a_stack);
	push_back(info->a_stack, data);
}
