/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:38:38 by chabrune          #+#    #+#             */
/*   Updated: 2022/11/23 16:41:58 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:50:19 by chabrune          #+#    #+#             */
/*   Updated: 2022/11/17 14:50:19 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnewnew(void *content, void (*del)(void *))
{
	t_list	*temp;

	temp = (t_list *)malloc(sizeof(*temp));
	if (!temp)
		return (NULL);
	if (del)
		del(temp->content);
	else
	{
		temp->content = content;
		temp->next = NULL;
	}
	return (temp);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_ele;
	t_list	*new_list;

	new_list = 0;
	while (lst)
	{
		new_ele = ft_lstnewnew(f(lst->content), del);
		if (!new_ele)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_ele);
		lst = lst->next;
	}
	return (new_list);
}
