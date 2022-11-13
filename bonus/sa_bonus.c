/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:01:46 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/13 19:38:38 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./checker_bonus.h"

void	sa_bonus(t_info *info)
{
	int	data;

	if (info->a_stack->size < 2)
		return ;
	data = info->a_stack->head.next->data;
	info->a_stack->head.next->data = info->a_stack->head.next->next->data;
	info->a_stack->head.next->next->data = data;
}
