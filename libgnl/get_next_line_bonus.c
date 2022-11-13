/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 14:38:11 by suhkim            #+#    #+#             */
/*   Updated: 2022/11/13 20:57:50 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

t_list	*check_fd(t_list *head, int fd)
{
	t_list	*temp;

	temp = head->next;
	while (temp)
	{
		if (fd == temp->fd)
			return (temp);
		temp = temp->next;
	}
	temp = (t_list *)malloc(sizeof(t_list));
	if (!temp)
		return (0);
	temp->fd = fd;
	temp->next = head->next;
	temp->pre = head;
	temp->str = 0;
	if (head->next)
		head->next->pre = temp;
	head->next = temp;
	return (temp);
}

char	*read_fd(t_list *node)
{
	char	*buf;
	int		size;

	buf = (char *)malloc(sizeof(char) * (10 + 1));
	if (!buf)
	{
		if (node->str)
			free(node->str);
		return (0);
	}
	size = 1;
	while (size > 0 && !ft_strchr_bonus(node->str, '\n'))
	{
		size = read(node->fd, buf, 10);
		if (size == -1)
			break ;
		*(buf + size) = 0;
		node->str = ft_strjoin_bonus(node->str, buf);
		if (!node->str)
			break ;
	}
	free(buf);
	if (size == -1)
		return (0);
	return (node->str);
}

char	*get_one_line(char	*str)
{
	char	*ans;
	char	*ptr;

	if (!str)
		return (0);
	if (*(str) == 0)
		return (0);
	ptr = ft_strchr_bonus(str, '\n');
	if (!ptr)
	{
		return (ft_strdup_bonus(str));
	}
	ans = (char *)malloc(sizeof(char) * (ptr - str + 2));
	if (!ans)
		return (0);
	ft_strlcpy_bonus(ans, str, ptr - str + 2);
	return (ans);
}

char	*remain_line(t_list *node)
{
	char	*ptr;
	char	*remain;

	ptr = ft_strchr_bonus(node->str, '\n');
	if (!ptr)
	{
		free(node->str);
		return (0);
	}
	remain = ft_strdup_bonus(ptr + 1);
	free(node->str);
	return (remain);
}

char	*get_next_line(int fd)
{
	static t_list	head;
	t_list			*node;
	char			*ans;

	if (fd < 0)
		return (0);
	node = check_fd(&head, fd);
	if (!node)
		return (0);
	if (!read_fd(node))
	{
		if (!node->str)
			lst_del_bonus(node);
		return (0);
	}
	ans = get_one_line(node->str);
	node->str = remain_line(node);
	if (!node->str)
		lst_del_bonus(node);
	return (ans);
}
