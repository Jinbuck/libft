/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 15:46:53 by mjin              #+#    #+#             */
/*   Updated: 2020/12/04 15:58:34 by mjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *ap_lst, void *(*ap_f)(void *),
		void (*ap_del)(void *))
{
	t_list	*p_ret;
	t_list	*p_pos;

	if (!(p_ret = ft_lstnew(ap_f(ap_lst->content))))
		return (NULL);
	p_pos = p_ret;
	ap_lst = ap_lst->next;
	while (ap_lst)
	{
		if (!(p_pos->next = ft_lstnew(ap_f(ap_lst->content))))
		{
			ft_lstclear(&p_ret, ap_del);
			return (NULL);
		}
		p_pos = p_pos->next;
		ap_lst = ap_lst->next;
	}
	return (p_ret);
}
