/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:01:46 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/10 21:42:13 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	sa(t_info *info, char *str)
{
	int	data;

	if (info->a_stack->size < 2)
		return ;
	if (!ft_strncmp(str, "sa", 2))
		ft_printf("sa\n");
	data = info->a_stack->head.next->data;
	info->a_stack->head.next->data = info->a_stack->head.next->next->data;
	info->a_stack->head.next->next->data = data;
}
