/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 15:31:17 by mjin              #+#    #+#             */
/*   Updated: 2020/12/03 16:03:44 by mjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *ap_dst, const void *ap_src, size_t a_num)
{
	unsigned char	*p_dst_pos;
	unsigned char	*p_src_pos;
	size_t			i;

	p_dst_pos = ap_dst;
	p_src_pos = (unsigned char *)ap_src;
	i = 0;
	if (p_dst_pos == p_src_pos)
		return (p_dst_pos);
	while (i < a_num)
	{
		p_dst_pos[i] = p_src_pos[i];
		i++;
	}
	return (ap_dst);
}
