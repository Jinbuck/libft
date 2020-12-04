/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 15:13:06 by mjin              #+#    #+#             */
/*   Updated: 2020/12/04 15:32:52 by mjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **ap_lst, void (*ap_del)(void *))
{
	t_list	*p_it;

	p_it = *ap_lst;
	if (ap_lst || *ap_lst)
	{
		while (*ap_lst)
		{
			*ap_lst = p_it->next;
			ap_del(p_it->content);
			free(p_it);
			p_it = *ap_lst;
		}
	}
}
