/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:39:04 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/11 22:27:27 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	rrr(t_info *info, char *str)
{
	if (!ft_strncmp(str, "rrr", 3))
		ft_printf("rrr\n");
	rra(info, str);
	rrb(info, str);
}
