/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 15:02:22 by mjin              #+#    #+#             */
/*   Updated: 2020/12/04 15:08:49 by mjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **ap_lst, t_list *ap_new)
{
	t_list	*p_lst;

	p_lst = *ap_lst;
	if (!(*ap_lst))
		*ap_lst = ap_new;
	else
	{
		while (p_lst->next)
			p_lst = p_lst->next;
		p_lst->next = ap_new;
	}
}
