/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_input_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 18:45:16 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/13 19:37:12 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./checker_bonus.h"

int	valid_input(char *str)
{
	if (!ft_strncmp(str, "sa\n", 3) || !ft_strncmp(str, "sb\n", 3) || \
			!ft_strncmp(str, "pa\n", 3) || !ft_strncmp(str, "pb\n", 3) || \
			!ft_strncmp(str, "ra\n", 3) || !ft_strncmp(str, "rb\n", 3) || \
			!ft_strncmp(str, "rr\n", 3) || !ft_strncmp(str, "rrr\n", 4) || \
			!ft_strncmp(str, "rra\n", 4) || !ft_strncmp(str, "rrb\n", 4) || \
			!ft_strncmp(str, "ss\n", 3))
		return (1);
	else
		return (0);
}
