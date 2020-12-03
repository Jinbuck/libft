/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:34:15 by mjin              #+#    #+#             */
/*   Updated: 2020/12/03 17:57:54 by mjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *ap_dst, const void *ap_src, size_t a_num)
{
	unsigned char	*p_dst_pos;
	unsigned char	*p_src_pos;
	size_t			i;

	p_dst_pos = ap_dst;
	p_src_pos = (unsigned char *)ap_src;
	i = 0;
	if (p_src_pos < p_dst_pos)
	{
		while (i < a_num)
		{
			p_dst_pos[a_num - i - 1] = p_src_pos[a_num - i - 1];
			i++;
		}
	}
	else if (p_src_pos > p_dst_pos)
	{
		while (i < a_num)
		{
			p_dst_pos[i] = p_src_pos[i];
			i++;
		}
	}
	return (ap_dst);
}
