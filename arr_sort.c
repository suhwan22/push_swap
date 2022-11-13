/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:58:36 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/13 21:35:00 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	arr_sort(int *arr, int len)
{
	int	i;
	int	j;
	int	min;
	int	minidx;

	i = 0;
	while (i < len - 1)
	{
		min = *(arr + i);
		minidx = i;
		j = i;
		while (++j < len)
		{
			if (min > *(arr + j))
			{
				min = *(arr + j);
				minidx = j;
			}
		}
		swap(arr + minidx, arr + i++);
	}
}
