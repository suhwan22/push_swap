/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:17:30 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/12 01:16:09 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

static void	get_arr(t_info *info, int *arr)
{
	int		i;
	t_node	*temp;

	i = 0;
	temp = info->a_stack->head.next;
	while (temp != &info->a_stack->head && i < 3)
	{
		*(arr + i++) = temp->data;
		temp = temp->next;
	}
}

int	sort_three(t_info *info)
{
	int	*arr;

	arr = malloc(sizeof(int) * 3);
	if (!arr)
		return (-1);
	get_arr(info, arr);
	if (arr[0] < arr[1] && arr[0] < arr[2] && arr[1] > arr[2])
	{
		exe_n_cmd(info, 1, &rra, "rra");
		exe_n_cmd(info, 1, &sa, "sa");
	}
	else if (arr[0] > arr[1] && arr[0] < arr[2] && arr[1] < arr[2])
		exe_n_cmd(info, 1, &sa, "sa");
	else if (arr[0] < arr[1] && arr[0] > arr[2] && arr[1] > arr[2])
		exe_n_cmd(info, 1, &rra, "rra");
	else if (arr[0] > arr[2] && arr[1] < arr[2] && arr[0] > arr[2])
		exe_n_cmd(info, 1, &ra, "ra");
	else if (arr[0] > arr[1] && arr[1] > arr[2])
	{
		exe_n_cmd(info, 1, &sa, "sa");
		exe_n_cmd(info, 1, &rra, "rra");
	}
	free (arr);
	return (0);
}
