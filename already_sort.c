/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   already_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 03:47:14 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/12 03:52:53 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	already_sort(int argc, char **argv)
{
	int	i;

	i = 0;
	while (++i < argc - 1)
	{
		if (!(ft_atoi(*(argv + i)) < ft_atoi(*(argv + i + 1))))
			return (0);
	}
	return (1);
}
