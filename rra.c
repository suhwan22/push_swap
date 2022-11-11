/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:37:35 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/11 22:28:04 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	rra(t_info *info, char *str)
{
	int	data;

	if (info->a_stack->size <= 1)
		return ;
	if (!ft_strncmp(str, "rra", 3))
		ft_printf("rra\n");
	data = pop_back(info->a_stack);
	push_front(info->a_stack, data);
}
