/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 14:48:34 by mjin              #+#    #+#             */
/*   Updated: 2020/12/04 23:40:01 by mjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *ap_content)
{
	t_list	*p_lst;

	if (!(p_lst = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	p_lst->content = ap_content;
	p_lst->next = NULL;
	return (p_lst);
}
