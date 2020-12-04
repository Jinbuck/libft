/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 14:59:58 by mjin              #+#    #+#             */
/*   Updated: 2020/12/04 15:01:46 by mjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *ap_lst)
{
	if (!ap_lst)
		return (ap_lst);
	while (ap_lst->next)
		ap_lst = ap_lst->next;
	return (ap_lst);
}
