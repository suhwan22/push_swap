/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_parameters_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 19:35:17 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/13 21:05:42 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./checker_bonus.h"
#include <string.h>

int	get_parameters_bonus(t_stack *a_stack, char **param, int len)
{
	int		i;

	i = 1;
	while (i < len)
	{
		push_back_bonus(a_stack, ft_atoi_bonus(*(param + i)));
		i++;
	}
	return (1);
}
