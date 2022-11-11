/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:29:47 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/10 21:42:13 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	sb(t_info *info, char *str)
{
	int	data;

	if (info->b_stack->size < 2)
		return ;
	if (!ft_strncmp(str, "sb", 2))
		ft_printf("sb\n");
	data = info->b_stack->head.next->data;
	info->b_stack->head.next->data = info->b_stack->head.next->next->data;
	info->b_stack->head.next->next->data = data;
}
