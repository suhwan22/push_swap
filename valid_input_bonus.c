/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_input_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 18:45:16 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/13 21:05:42 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./checker_bonus.h"

int	valid_input(char *str)
{
	if (!ft_strncmp_bonus(str, "sa\n", 3) || \
			!ft_strncmp_bonus(str, "sb\n", 3) || \
			!ft_strncmp_bonus(str, "pa\n", 3) || \
			!ft_strncmp_bonus(str, "pb\n", 3) || \
			!ft_strncmp_bonus(str, "ra\n", 3) || \
			!ft_strncmp_bonus(str, "rb\n", 3) || \
			!ft_strncmp_bonus(str, "rr\n", 3) || \
			!ft_strncmp_bonus(str, "rrr\n", 4) || \
			!ft_strncmp_bonus(str, "rra\n", 4) || \
			!ft_strncmp_bonus(str, "rrb\n", 4) || \
			!ft_strncmp_bonus(str, "ss\n", 3))
		return (1);
	else
		return (0);
}
