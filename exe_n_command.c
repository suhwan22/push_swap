/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exe_n_command.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:29:01 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/11 22:36:34 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	exe_n_cmd(t_info *info, int n, void (*f)(t_info *, char *), char *str)
{
	while (n > 0)
	{
		f(info, str);
		n--;
	}
}
