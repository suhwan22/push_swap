/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:34:27 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/10 21:31:30 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	pb(t_info *info, char *str)
{
	int	data;

	if (!info->a_stack->head.next)
		return ;
	if (!ft_strncmp(str, "pb", 2))
		ft_printf("pb\n");
	data = pop_front(info->a_stack);
	push_front(info->b_stack, data);
}
