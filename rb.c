/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:36:45 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/10 21:33:48 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	rb(t_info *info, char *str)
{
	int	data;

	if (info->b_stack->size <= 1)
		return ;
	if (!ft_strncmp(str, "rb", 2))
		ft_printf("rb\n");
	data = pop_front(info->b_stack);
	push_back(info->b_stack, data);
}
