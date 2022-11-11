/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_parameters.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 19:35:17 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/11 21:37:34 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"
#include <string.h>

int	get_parameters(t_stack *a_stack, char **param, int len)
{
	int		i;

	i = 1;
	while (i < len)
	{
		push_back(a_stack, ft_atoi(*(param + i)));
		i++;
	}
	return (1);
}
