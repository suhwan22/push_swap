/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:15:29 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/13 21:35:01 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	sort_two(t_info *info)
{
	t_node	*temp;

	temp = info->a_stack->head.next;
	if (temp->data > temp->next->data)
		exe_n_cmd(info, 1, &sa, "sa");
	return (0);
}
